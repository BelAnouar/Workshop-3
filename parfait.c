#include<stdio.h>

int parfait(int nbr) {
    int somme = 0;
    for (int i = 1; i < nbr; ++i) {
        if (nbr % i == 0) {
            somme += i;
        }
    }
    return somme;
}

int main() {
    int nbr;
    printf("Entrez un nombre : ");
    scanf("%d", &nbr);

    int sommeDesDiviseurs = parfait(nbr);

    if (sommeDesDiviseurs == nbr) {
        printf("%d est un nombre parfait.\n", nbr);
    } else {
        printf("%d n'est pas un nombre parfait.\n", nbr);
    }

    return 0;
}
