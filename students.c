#include <stdio.h>
#include <stdlib.h>
typedef struct Bank {
char CIN [15];
char name [30];
char famillyName[30];
float amount;
} bk;
void addAccount (bk acounts[] ,int *m){
    int n;
    printf("enter the of acounts that you want to enter");
    scanf("%d\n",&n);
            for (int i =0 ;i<n; i++){
            bk Account;
            printf("Account %d\n", i+1);
            ptintf("CIN\n");
            scanf("%d\n",Account.CIN);
            printf("Name:\n");
            getchar();
            fgets(Account.name, sizeof(Account.name),stdin);

            getchar();
            fgets(Account.famillyName, sizeof(Account.famillyName),stdin);

            printf("Amount");
            scanf("%.2f",&Account.amount);
            acounts[*m]=Account;


   (*m)++;
   //incrementing the number of acounts that we have in the bank ;
   printf("yoiur account has been added successfully\n");


}


}



int main(){
    bk acounts[100];
    int choice , n=0;

while (1)
    {
        printf("Principal Menu \n ");
        printf("1. Add a new account \n");
        printf("2. List acounts By Name \n");
        printf("3. List acounts By Price \n");
        printf("4. Buy Product \n");
        printf("5. Quit \n");
        printf("Choice \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Call the function to add a new product
            addAccount(acounts, &n);
            printf("Option 1: Add a new product\n");
            break;
        case 2:
            // Call the function to list acounts by name
            ListacountsByName(acounts, n);
            printf("Option 2: List acounts by name\n");
            break;
        case 3:
            // Call the function to list acounts by price
            ListacountsByPrice(acounts, n);
            printf("Option 3: List acounts by price\n");
            break;
        case 4:
            // Call the function to purchase a product
             buyProduct(acounts, n);
            printf("Option 4: Purchase a product\n");
            break;
        case 5:
            // Save the acounts to the file before quitting
            saveacountsToFile(acounts, n);
            printf("Exiting the program.\n");
       case 6:
            searchProductByCode(acounts, n);
            printf("Option 6: Search product by code\n");
            break;
        case 7:
            searchProductByName(acounts, n);
            printf("Option 7: Search product by name\n");
            break;
            exit(0); // Terminate the program
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }}