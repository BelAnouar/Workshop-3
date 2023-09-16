#include <stdio.h>

int main() {
    char input[100]; 

    printf("Enter a string: ");
    scanf("%s", input);

    int length = 0;
    while (input[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
