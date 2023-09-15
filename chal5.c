#include <stdio.h>

// Définition de la fonction Permuter
void Permuter(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    double x = 5.0;
    double y = 10.0;

    printf("Avant permutation : x = %.2lf, y = %.2lf\n", x, y);

    // Appel de la fonction Permuter pour échanger les valeurs de x et y
    Permuter(&x, &y);

    printf("Après permutation : x = %.2lf, y = %.2lf\n", x, y);

    return 0;
}
