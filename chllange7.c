#include <stdbool.h>
#include <stdio.h>
static int i;
bool estPremier(int n) {
    if (n <= 1) {
        return false;
    }
    
    for ( i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int nombre;
    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);

    if (estPremier(nombre)) {
        printf("%d est un nombre premier.\n", nombre);
    } else {
        printf("%d n'est pas un nombre premier.\n", nombre);
    }

    return 0;
}

