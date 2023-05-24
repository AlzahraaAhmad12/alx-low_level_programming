#include "main.h"
int _strlen_recursion(char *s);
int check_palindrome(char *s, int x, int len);
/**
 *is_palindrome- check if the string is a palindrome.
 *@s: Input
 *Return: int
 *
**/
int is_palindrome(char *s)
{
len = _strlen_recursion(s)
return (check_palindrome(s, 0, len - 1));
}
/**
 * _strlen_recursion-  returns the length of a string.
 *@s: Input
 *Return: int
 *
**/
int _strlen_recursion(char *s)
{
int len = 0;
if (*s)
{
len += _strlen_recursion(s + 1) + 1;
}
return (len);
}
/**
 * check_palindrome- check if the string is a palindrome.
 *@s: Input
 *@x: Input
 *@len: Input
 *Return: int
 *
**/
int check_palindrome(char *s, int x, int len)
{
if (x + 1 == len || x == len)
{
return (1);
}
else if (s[x] != s[len])
{
return (0);
}
else if (x < len + 1)
{
return (check_palindrome(s, x + 1, len - 1));
}
}

