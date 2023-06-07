#include "main.h"
int natural_sqr(int n, int x);
/**
 *_sqrt_recursion- returns the natural square root of a number.
 *@n: Input
 *Return: int
 *
**/
int _sqrt_recursion(int n)
{
return (natural_sqr(n, 1));
}
/**
 * natural_sqr-  returns the length of a string.
 *@n: Input
 *@x: Input
 *
 *Return: int
 *
**/
int natural_sqr(int n, int x)
{
if (x * x == n)
{
return (x);
}
else if (x * x < n)
{
return (natural_sqr(n, x + 1));
}
return (-1);
}
