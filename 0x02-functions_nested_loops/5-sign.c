#include "main.h"

/**
*print_sign - function to check for a sign of a number.
*@n: The number of which sign will be printed
* Return: 0
*   
*
**/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
