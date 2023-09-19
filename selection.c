#include <stdio.h>

int main(){
    int size,i,j,temp;
    printf("Saisir l'elements du tableau :");
    scanf("%d", &size);
    int T[size];

    for ( i = 0; i < size; i++)
    {
        printf("L'element %d :", i+1);
        scanf("%d", &T[i]);
    }
    for (i = 0; i < size - 1; i++)
    {j
       int posmin = i;
       for ( j = i + 1; j < size; j++)
       {
        if(T[posmin] > T[j])
         posmin = j; //Croissant
       }

        {temp = T[i];
        T[i]= T[posmin];
        T[posmin]= temp;}
       
       
    }for ( i = 0; i < size; i++);
    {
        printf("%d ", T[i]);
    }
    
        
    
 return 0;   
}