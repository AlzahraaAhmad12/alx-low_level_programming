#include "main.h"
int check_prime(int n, int x);
/**
 *is_prime_number- check if the input is a prime number.
 *@n: Input
 *Return: int
 *
**/
int is_prime_number(int n)
{
return (check_prime(n, 2));
}
/**
 *check_prime-  check prime numbers
 *@n: Input
 *@x: Input
 *
 *Return: int
 *
**/
int check_prime(int n, int x)
{
if (n < 2)
{
return (0);
}
else if (n == 2)
{
return (1);
}
else if (n % x == 0 && n != 2)
{
return (0);
}
else if (x * x > n)
{
return (1);
}
else
{
return (check_prime(n, x + 1));
}
}
