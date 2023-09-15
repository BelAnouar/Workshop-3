#include <stdio.h>
#include <math.h>

// Procédur ax^4 + bx^2 + c = 0
void resoudreEquationBicarree(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        printf("L'équation n'a pas de solutions réelles.\n");
    } else if (discriminant == 0) {
        double solution = -b / (2 * a);
        printf("L'équation a une unique solution réelle : x = %.2lf\n", solution);
    } else {
        double racineDelta = sqrt(discriminant);
        double x1 = (-b + racineDelta) / (2 * a);
        double x2 = (-b - racineDelta) / (2 * a);
        printf("L'équation a deux solutions réelles distinctes :\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }
}

int main() {
    double a, b, c;

    printf("Entrez les coefficients de l'équation bicarrée (ax^4 + bx^2 + c = 0):\n");
    printf("a : ");
    scanf("%lf", &a);
    printf("b : ");
    scanf("%lf", &b);
    printf("c : ");
    scanf("%lf", &c);

    resoudreEquationBicarree(a, b, c);

    return 0;
}

