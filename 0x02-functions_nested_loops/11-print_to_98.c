#include "main.h"
/**
 *print_to_98- print natural numbers from n to 98.
 *@n: Input
 *
 */
void print_to_98(int n)
{
int c;

if (n < 98)
{
for (c =  n; c < 98; c++)
{
print("%d, ", c);
}
}
else
{
for (c = n; c > 98; c--)
{
print("%d, ", c);
}
}
print("98\n");
}
