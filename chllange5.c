#include <stdio.h>

// Définition de la fonction Permuter pour échanger les valeurs de deux variables réelles
void Permuter(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
     printf("Après la permutation : num1 = %d, num2 = %d\n", a, b);

}

int main() {
    int num1, num2;

    printf("Entrez la première valeur réelle : ");
    scanf("%d", &num1);

    printf("Entrez la deuxième valeur réelle : ");
    scanf("%ld", &num2);

    printf("Avant la permutation : num1 = %d, num2 = %d\n", num1, num2);

    // Appeler la fonction 
    Permuter(num1, num2);

   
    return 0;
}

