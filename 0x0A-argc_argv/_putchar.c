#include <stdio.h>
#include "main.h"

/**
 * _puchar - writes the character c to standout
 * @c : there character to print
 *
 * Return : on success 1.
 * on error, -1 is returned and error is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
