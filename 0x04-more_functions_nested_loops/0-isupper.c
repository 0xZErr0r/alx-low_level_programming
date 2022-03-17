#include "holberton.h"

/**
 * _isupper - uppercase checker
 * @c: int var
 * Return: 1 if T and 0 if F
 */

int _isupper(int c)
{
    if (c >= 65 && c <= 90) 
    {
        return (1);
    }
    return (0);
}
