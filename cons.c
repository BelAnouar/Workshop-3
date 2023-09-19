#include <stdio.h>

int consecutiveSum(int n) {
    if (n <= 0) {
        printf("Input must be a positive integer.\n");
        return 0;  
    }

    int i = 1, j = 2;
    int sum = i + j;
    int found = 0;  
    // i =start , j =end , k = consecutive numbers 

    printf("Consecutive nbers that sum up to %d:\n", n);

    while (i <= n/2 ) {
        if (sum == n) {
            for (int k = i; k <= j; k++) {
                printf("%d ", k);
            }
            printf("\n");
            //if sum > n we have to eliminate the i from the sum
            sum -= i;
            i++;
            found = 1;
        } else if (sum < n) {
            j++;
            sum += j;
        } else {
            sum -= i;
            i++;
        }
    }

    return found;  // Return 1 if consecutive nbers were found, 0 otherwise.
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int result = consecutiveSum(n);

    if (result == 0) {
        printf("No consecutive nbers found.\n");
    }

    return 0;
}
