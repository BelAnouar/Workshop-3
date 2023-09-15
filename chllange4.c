#include <stdio.h>

int Max_2(int a, int b) {
//    return (a > b) ? a : b;
    if(a > b)return  a; 
    else return  b; 
}

int Max_4(int a, int b, int c, int d) {

    int max_ab = Max_2(a, b);
    
    
    int max_cd = Max_2(c, d);
    

    int result = Max_2(max_ab, max_cd);
    
    return result;
}

int main() {
    int num1, num2, num3, num4;

    printf("Entrez quatre entiers : ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int max = Max_4(num1, num2, num3, num4);

    printf("Le maximum parmi les quatre entiers est : %d\n", max);

    return 0;
}

