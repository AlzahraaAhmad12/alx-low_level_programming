#include<stdio.h>
/**
 *main- print numbers of base 16 in lowercase .
 * Return:0
 */
int main(void)
{
int num;
char c;

for (num = 0; num <= 9; num++)
{
putchar(num + '0');
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
