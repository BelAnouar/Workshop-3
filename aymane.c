#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main (){

    int i,j,n=0;


    printf("enter a number : ");
    scanf("%d", &n);
    int** t = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        t[i] = (int*)malloc((i + 1) * sizeof(int));
    }
    for (i =0; i<n; i++) {
        t[i][i]=  1;
        t[i][0]= 1;

        for (j=1; j<=i; j++){
            t[i][j] = t[i-1][j-1] + t[i-1][j];
        }
    }
    for (i= 0; i<=n; i++){
        for (j=0; j<=i; j++){
            printf(" %2d ", t[i][j]);
        }
            printf("\n");
    }

    return 0;
}