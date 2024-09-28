#include <stdio.h>

void bark(void)
{
    printf("bark \n");
}

int main(void) 
{
    for (int x = 0; x < 5; x++)
        bark();
}
