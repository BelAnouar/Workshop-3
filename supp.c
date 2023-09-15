#include <stdio.h>

int main() {
    int n, valueToDelete;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size. Please enter a positive integer.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value you want to delete: ");
    scanf("%d", &valueToDelete);

    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == valueToDelete) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            found = 1;
            n--;
            //used to decrease the size of the array
            i--;
            //insure that the next index is i bcz we deleted one
        }
    }

    if (found) {
        printf("Value %d deleted from the array.\n", valueToDelete);
        printf("Updated array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Value %d not found in the array.\n", valueToDelete);
    }

    return 0;
}
