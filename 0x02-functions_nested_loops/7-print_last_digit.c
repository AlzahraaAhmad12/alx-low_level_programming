#include "main.h"
/**
 *print_last_digit-  prints the last digit of a number..
 *@n: Input
 *
 *Return: last digit of n
 */
int print_last_digit(int n)
{
int x;
x = (n % 10);
if (n < 0)
{
x*=-1;
}
_putchar(x + '0');
return (x);
}
