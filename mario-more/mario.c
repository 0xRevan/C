#include <cs50.h>
#include <stdio.h>

// le problem
// in a file called mario.c in a folder called mario-more, implement a program in C that recreates
// that pyramid, using hashes (#) for bricks, as in the below:

//    #  #
//   ##  ##
//  ###  ###
// ####  ####
// And let’s allow the user to decide just how tall the pyramids should be by first prompting them
// for a positive int between, say, 1 and 8, inclusive

int main(void)
{
    // declaring variables
    // rememeber to end by ;
    int height;

    do
    {
        // get user input
        // get user input to print the # pyramids
        // Prompt the user for input and ensure it's a positive integer
        // I was really into the Mummy, and found out this guy actually built pyramids for the
        // Pharoahs
        height = get_int("Imhotep, guide the pyramid building. What size should it be? \n");
    }
    // main conditions for height - only 1 to 10
    while (height < 1 || height > 10);

    // printing the double-trouble pyramid
    for (int row = 0; row < height; row++)
    {
        // printing the space inbetween
        for (int space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        // prints the hashes for the pyramid
        for (int hash = 0; hash <= row; hash++)
        {
            printf("#");
        }

        // printing the double space inbetween the pyramids
        printf("  ");

        // prints the hashes for the pyramid
        for (int hash = 0; hash <= row; hash++)
        {
            printf("#");
        }

        printf("\n"); // print a newline after each row
    }

    return 0; // return 0 to indicate successful execution
}
