#include <stdio.h>
#include <math.h>

// Fonction qui résout une équation bicarrée ax^4 + bx^2 + c = 0
void resoudreBicarree(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (a == 0) {
        printf("Ce n'est pas une équation bicarrée valide (a ne peut pas être égal à 0).\n");
        return;
    }

    if (discriminant < 0) {
        printf("L'équation n'a pas de solutions réelles.\n");
    } else {
        double racineDiscriminant = sqrt(discriminant);
        double x1 = (-b + racineDiscriminant) / (2 * a);
        double x2 = (-b - racineDiscriminant) / (2 * a);

        printf("Les solutions de l'équation sont :\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }
}

int main() {
    double a, b, c;

    printf("Entrez les coefficients de l'équation bicarrée (ax^4 + bx^2 + c = 0):\n");
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    resoudreBicarree(a, b, c);

    return 0;
}
