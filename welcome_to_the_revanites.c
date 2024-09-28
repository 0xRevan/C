#include <stdio.h>

int main(void) 
{
    char x; 
        
        printf("Do you agree with our teachings? y/n: \n");
        scanf(" %c", &x);
            
            if (x == 'y' || x == 'Y' ) {
                printf ("You are welcomed into the Revanites. \n");
            }
            // i only (really) want a Y/y answer here
            else 
            {
                printf ("Please, leave accordingly. \n");
    }
 return 0;
} 