#include<stdio.h>
/**
 *main-  prints the alphabet in lowercas in reverse, followed by a new line.
 * Return:0
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
