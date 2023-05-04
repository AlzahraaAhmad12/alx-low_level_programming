#include<stdio.h>
/**
 *main-  prints the alphabet in lowercase except q & e, followed by a new line.
 * Return:0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c == 'q' || c == 'e')
break;
else
putchar(c);
}
putchar('\n');
return (0);
}
