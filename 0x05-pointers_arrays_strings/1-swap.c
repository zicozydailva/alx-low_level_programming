#include "main.h"

/**
 * @a poiner first value
 * @b pointer to second value  
 * swap_int swaps the value of integers
 */
void swap_int(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
