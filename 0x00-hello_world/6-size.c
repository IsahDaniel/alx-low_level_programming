#include <stdio.h>
/**
 * main:Write a C program that prints the size of various 
 * types on the computer it is compiled and run on.
 * Return- 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("size of a short: %d byte(s)\n", sizeof(short));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
