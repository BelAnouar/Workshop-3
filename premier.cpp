#include <stdio.h>
#include <stdbool.h>

bool premier(int nombre) {
    if (nombre <= 1) {
        return false;
    } else {
        for (int diviseur = 2; diviseur <= nombre / 2; diviseur++) {
            if (nombre % diviseur == 0) {
                return false; 
            }
        }
        return true; 
    }
}

int main() {
    int nombre;

    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);

    bool res = premier(nombre);

    if (res) {
        printf("%d est un nombre premier.\n", nombre);
    } else {
        printf("%d n'est pas un nombre premier.\n", nombre);
    }

    return 0;
}
