#include <stdio.h>

int main(void) {

    int z;  // Declare the variable to hold user input
do

{
    printf("Size?:\n");
    scanf("%i", &z);  // Read an integer input from the user
} 
while (z < 1);

    // Adjust the outer loop based on user input for size
    for (int x = 0; x < z; x++) {
        for (int k = 0; k < 5; k++) {
            printf("#");
        }
        printf("\n");  // Print a newline after each row
    }

    return 0;  // Return 0 to indicate successful execution
}