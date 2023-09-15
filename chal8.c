#include <stdio.h>

// Fonction qui teste si un nombre est parfait
int estNombreParfait(int nombre) {
    if (nombre <= 0) {
        return 0; // Les nombres négatifs ou nuls ne sont pas parfaits
    }

    int sommeDiviseurs = 0;

    // Parcourir les diviseurs potentiels de 1 à nombre/2
    for (int diviseur = 1; diviseur <= nombre / 2; diviseur++) {
        if (nombre % diviseur == 0) {
            sommeDiviseurs += diviseur;
        }
    }

    // Si la somme des diviseurs est égale au nombre, c'est un nombre parfait
    if (sommeDiviseurs == nombre) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int nombre;
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    if (estNombreParfait(nombre)) {
        printf("%d est un nombre parfait.\n", nombre);
    } else {
        printf("%d n'est pas un nombre parfait.\n", nombre);
    }

    return 0;
}
