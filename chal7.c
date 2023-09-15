#include <stdio.h>
#include <stdbool.h>

// Fonction qui teste si un entier est premier
bool estPremier(int n) {
    if (n <= 1) {
        return false; // Les nombres négatifs et 1 ne sont pas premiers
    }

    if (n <= 3) {
        return true; // 2 et 3 sont premiers
    }

    if (n % 2 == 0 || n % 3 == 0) {
        return false; // Les multiples de 2 ou de 3 ne sont pas premiers
    }

    // Vérification des diviseurs potentiels à partir de 5
    for (int diviseur = 5; diviseur * diviseur <= n; diviseur += 6) {
        if (n % diviseur == 0 || n % (diviseur + 2) == 0) {
            return false; // Si n est divisible par diviseur ou diviseur + 2, il n'est pas premier
        }
    }

    return true; // Si aucun diviseur trouvé, n est premier
}

int main() {
    int nombre;
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    if (estPremier(nombre)) {
        printf("%d est un nombre premier.\n", nombre);
    } else {
        printf("%d n'est pas un nombre premier.\n", nombre);
    }

    return 0;
}
