#include <stdio.h>

int CoeficientBinomial(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return CoeficientBinomial(n - 1, k - 1) + CoeficientBinomial(n - 1, k);
}

int main() {
    int n;

    printf("Entrez le nombre de lignes du triangle : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Afficher les espaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // Calculer et afficher les coefficients
        for (int j = 0; j <= i; j++) {
            int coef = CoeficientBinomial(i, j);
            printf("%d ", coef);
        }

        printf("\n");
    }

    return 0;
}
