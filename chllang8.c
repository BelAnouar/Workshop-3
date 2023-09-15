#include <stdio.h>
#include <stdbool.h>
static int i;
int estNombreParfait(int n) {
    if (n <= 0) {
        return 0;  
    }

    int sommeDiviseurs = 0;

    for ( i = 1; i < n; i++) {
        if (n % i == 0) {
            sommeDiviseurs += i;
//            printf("index %d\n", i);
//            printf("somme :%d \n",   sommeDiviseurs);
        }
    }
      if(sommeDiviseurs == n)return 1 ;
    
}

int main() {
    int nombre;
    
    printf("Entrez un nombre positif : ");
    scanf("%d", &nombre);

    if (estNombreParfait(nombre)==1) {
        printf("%d est un nombre parfait.\n", nombre);
    } else {
        printf("%d n'est pas un nombre parfait.\n", nombre);
    }

    return 0;
}

