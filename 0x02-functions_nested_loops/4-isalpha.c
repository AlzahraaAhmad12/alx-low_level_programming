#include "main.h"
/**
 * _isalpha-  checks for lowercase  and uppercase character.
 *@c: character that we will check
 *
 *Return: 0 or 1
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z' ))
{
return (1);
}
return (0);
}
