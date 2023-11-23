#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    } while (n < 1);
    // j++ ====> J+=1 ====> j=j+1
    for (int j = 0; j < n; j++)
    {
        printf("#");
    }
}