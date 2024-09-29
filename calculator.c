#include <stdio.h>

int add(int f, int g);  // Function prototype

int main(void)
{
    int x, y;  // Declare x and y

    // Get x
    printf("x? \n");
    scanf("%i", &x);

    // Get y
    printf("y? \n");
    scanf("%i", &y);

    // Calculate the answer using the add function
    int answer = add(x, y);
    
    // Print the answer
    printf("Arithmetics! The answer is: %i\n", answer);

    return 0;  // Return 0 to indicate successful execution
}

// Function to add two integers
int add(int f, int g)
{
    return f + g;  // Return the sum of f and g
}