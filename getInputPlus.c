#include <stdio.h>

int main(void)
{
    char firstName[80]; 
    char lastName[80];
    int age;    

// gets the first name
    printf("What is your first name: ");
    scanf("%79s", firstName);

// gets the surname name

    printf("What is your surname: ");
    scanf("%79s", lastName);

// gets the age

    printf("What is your age: ");
    scanf("%i", &age);

    printf("Output: %s %s, Age: %i\n", firstName, lastName, age);  // Output the collected information
}