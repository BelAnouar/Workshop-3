#include <stdio.h>

// D�finition de la fonction Permuter pour �changer les valeurs de deux variables r�elles
void Permuter(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
     printf("Apr�s la permutation : num1 = %d, num2 = %d\n", a, b);

}

int main() {
    int num1, num2;

    printf("Entrez la premi�re valeur r�elle : ");
    scanf("%d", &num1);

    printf("Entrez la deuxi�me valeur r�elle : ");
    scanf("%ld", &num2);

    printf("Avant la permutation : num1 = %d, num2 = %d\n", num1, num2);

    // Appeler la fonction 
    Permuter(num1, num2);

   
    return 0;
}

