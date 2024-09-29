// #include <stdio.h>
// int main(void) {

//     for (int x = 0; x < 5; x++)
//     {
//         printf("####\n");
//     }

// }

#include <stdio.h>

int main(void) {
    int z;  // Declare the variable to hold user input
    printf("Size?:\n");
    scanf("%i", &z);  // Read an integer input from the user

    // Adjust the outer loop based on user input for size
    for (int x = 0; x < z; x++) {
        for (int k = 0; k < 15; k++) {
            printf("#");
        }
        printf("\n");  // Print a newline after each row
    }

    return 0;  // Return 0 to indicate successful execution
}