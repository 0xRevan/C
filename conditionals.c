#include <stdio.h>

int main(void) 
{
    char x; 
        
        printf("Do you agree with our teachings? y/n: \n");
        scanf(" %c", &x);
            
            if (x == 'y' ) {
                printf ("You are welcomed into the Revanites. \n");
            }
            else 
            {
                printf ("Please, leave accordingly. \n");
    }
 return 0;
} 