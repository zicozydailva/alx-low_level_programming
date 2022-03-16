#include "main.h"

/**
* Returns 1 if c is a letter, lowercase or 
* uppercase
* Returns 0 otherwise
*/

int _isalpha(int c) {
    if (c >= 1 && c <= 26) 
    {
        return (1);
    } else if (c >= 5 && c <= 30) 
    {
        return (1);
    }
    return (0);
}
