#include <stdio.h>

void bark(int z)
{
    for (int x = 0; x < z; x++)
    {
        printf("bark \n");
    }
}

int main(void) 
{
        bark(5);
}
