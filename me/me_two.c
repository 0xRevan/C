#include <cs50.h>
#include <stdio.h>

// Problem to Solve
// In a file called hello.c, in a folder called me, implement a program in C that prompts the user for their name and then says hello to that user. 
// For instance, if the user’s name is Adele, your program should print hello, Adele\n!

int main(void)
{
// remember to declare the variables needed at the start
string first_name = get_string("What is your name? \n");

// prints the user's name to the screen, with a standard greeting
        printf("Hello, %s!\n", first_name);

return 0;
}