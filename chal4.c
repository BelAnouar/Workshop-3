#include <stdio.h>

// Fonction qui trouve le maximum de deux entiers
int Max_2(int a, int b) {
    return (a > b) ? a : b;
}

int Max_4(int a, int b, int c, int d) {
    int max1 = Max_2(a, b); // Trouver le maximum de a et b
    int max2 = Max_2(c, d); // Trouver le maximum de c et d
    return Max_2(max1, max2); // Trouver le maximum de max1 et max2
}

int main() {
    int num1, num2, num3, num4;

    printf("Entrez quatre entiers : ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int maximum = Max_4(num1, num2, num3, num4);

    printf("Le maximum des quatre entiers est : %d\n", maximum);

    return 0;
}
