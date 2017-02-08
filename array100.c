#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int array_size = 100;
    int array[array_size];
    
    for(int i = 0; i < array_size; i++)
    {
        array[i] = i;
        printf("array index at %i equals %i\n", i,  (array[i] + 1));
    }
}
