// C(n, k) = C(n - 1, k - 1) + C(n - 1, k) 
// C(4, 2) = C(3, 1) + C(3, 2)
// C(3, 1) = C(2, 0) + C(2, 1)=1+2
// C(3, 2) = C(2, 1) + C(2, 2)=2+1
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n = 0;

    printf("Enter un nombre: ");
    scanf("%d", &n);

    
    int** t = (int**)malloc(n * sizeof(int*));

    for (i = 0; i < n; i++) {
        t[i] = (int*)malloc((i + 1) * sizeof(int));
    }

    for (i = 0; i < n; i++) {
        t[i][0] = 1;
        t[i][i] = 1;

        for (j = 1; j < i; j++) {
            t[i][j] = t[i - 1][j - 1] + t[i - 1][j];
        }
    }

    for (i = 0; i <=n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%4d ", t[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}
