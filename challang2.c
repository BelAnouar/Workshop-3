#include <stdio.h>

// Définition de la fonction bonjour
 int Somme(int a,int b){
    return a+b;
}

int main() {
    
    int a,b;
    printf("donner un nombre  :");
    scanf("%d %d",&a,&b);
    printf("la somme %d",Somme(a,b));

    return 0;
}

