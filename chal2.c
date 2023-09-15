#include <stdio.h>

// Function to calculate the GCD using the Euclidean algorithm
int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    printf("Enter two positive integers (a > b): ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0 || a < b) {
        printf("Please enter two positive integers with a > b.\n");
    } else {
        int gcd = calculateGCD(a, b);
        printf("The GCD of %d and %d is: %d\n", a, b, gcd);
    }

    return 0;
}

// // using recursivity
// #include <stdio.h>

// // Fonction récursive pour calculer le PGCD
// int PGCD(int a, int b) {
//     if (b == 0) {
//         return a; // Le PGCD de a et 0 est a
//     } else {
//         return PGCD(b, a % b); // Utilisation de l'algorithme d'Euclide
//     }
// }

// int main() {
//     int a, b;

//     printf("Entrez deux entiers (a > b) : ");
//     scanf("%d %d", &a, &b);

//     if (a <= 0 || b <= 0 || a < b) {
//         printf("Veuillez entrer des entiers non nuls et a doit être supérieur à b.\n");
//     } else {
//         int pgcd = PGCD(a, b);
//         printf("Le PGCD de %d et %d est : %d\n", a, b, pgcd);
//     }

//     return 0;
// }
