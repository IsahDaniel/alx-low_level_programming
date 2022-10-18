#include <stdio.h>
/**
 * main:Write a C program that prints the size of various 
 * types on the computer it is compiled and run on.
 * Return- 0 if exited properly, non-zero otherwise
int main()
{
	printf("Size of a character:%d byte", sizeof(char));
	printf("size of a short:%d byte", sizeof(short));
	printf("Size of an integer:%d byte", sizeof(int));
	pritf("Size of long integer:%d", sizeof(long int));
}
