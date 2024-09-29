#include <stdio.h>

int main(void) {
    // Declare the variable to hold user input
    int z; 

    // Prompt the user for input and ensure it's a positive integer
    do {
        printf("Size?:\n");
        scanf("%i", &z);  // Read an integer input from the user
    } while (z < 1);

    // Print the specified number of rows with hashes
    for (int x = 0; x < z; x++) {
        for (int k = 0; k < 5; k++) {
            printf("#");
        }
        printf("\n");  // Print a newline after each row
    }

    return 0;  // Return 0 to indicate successful execution
}