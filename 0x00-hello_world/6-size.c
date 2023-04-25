#include<stdio.h>
/**
 * main - Entry point
 *Function that prints the size of various types on the computer it is compiled and run on.
 *
 * Return:0
 */

int main(void)
{
    printf("Size of a char: %u byte(s)\n", sizeof(char));
    printf("Size of an int: %u byte(s)\n", sizeof(int));
    printf("Size of a long int: %u byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %u byte(s)\n", sizeof(lon
g long int));
    printf("Size of a float: %u byte(s)\n", sizeof(float));
    return (0);
}


