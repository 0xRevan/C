#include <stdio.h>

int main(void)
{
    // defining x, y 
int x , y;

    // get x
    printf("x? \n");
    scanf("%i", &x);

    // get y
    printf("y? \n");
    scanf("%i", &y);

    // calculates answer
        int answer = x + y;

            printf("Arithmetics! The answer is: %i\n", answer);

}