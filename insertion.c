#include <stdio.h>

int main() {
    int size;

    // Ask the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size. Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    int arr[size];
    int i, j, temp, minIndex;

    // Ask the user to enter numbers
    printf("Enter %d numbers: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the original array
    printf("Original Array: ");
    for (i = 0; i < size; i++) {
        printf("%4d", arr[i]);
    }

    // Selection sort algorithm
    for (i = 0; i < size - 1; i++) {
        minIndex = i;

        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            // Swap arr[i] and arr[minIndex]
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    // Print the sorted array
    printf("\nSorted Array (ascending order): ");
    for (i = 0; i < size; i++) {
        printf("%4d", arr[i]);
    }

    return 0;
}
