#include<stdio.h>
/**
 * main -Entry point
 *
 * Return Always 0 (Success)
 */
main(void)
{
	printf("size of int: %zu bytes\n", sizeof(intType));
	printf("size of char: %zu bytes\n", sizeof(charType));
	printf("size of float: %zu bytes\n", sizeof(floatType));
	printf("size of double: %zu bytes\n", sizeof(doubleType));
}
