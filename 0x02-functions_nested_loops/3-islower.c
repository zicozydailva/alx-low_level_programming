#include "main.h"

/**
 * _islower - checks for lowercase character
 * : the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isLower(int c) 
{
    if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
