#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument verbose
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

return (0);
}
