#include <stdio.h>

int main() {
    int size;
    
    // Ask the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int arr[size];

    // Ask the user to enter the elements of the array
    printf("Enter %d elements :\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter a number to search for: ");
    int target;
    scanf("%d", &target);

    int left = 0;
    int right = size - 1;
    int found = 0;

    while (left <= right) {
        int mid = (left + right) / 2;
        // int mid = left + (right - left) / 2;


        if (arr[mid] == target) {
            found = 1;
            printf("Number %d found at index %d.\n", target, mid);
            break; 
        }

        if (arr[mid] < target) {
            left = mid + 1; // Search the right half
        } else {
            right = mid - 1; // Search the left half
        }
    }

    if (!found) {
        printf("Number %d not found.\n", target);
    }

    return 0;
}
