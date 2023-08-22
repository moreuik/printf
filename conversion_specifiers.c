#include <stdio.h>

/**
 * main - the main function
 * Return: 0 upon success
 */

int main(void)
{
	unsigned int num = 587;

	printf("Decimal: %u\n", num);
	printf("Octal: %o\n", num);
	printf("Hexadecimal (lowercase) %x\n", num);
	printf("Hexadecimal (uppercase) %X\n", num);

	return (0);
}
