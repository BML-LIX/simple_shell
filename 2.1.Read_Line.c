#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main-prototype
 *Return: 0
 */
int main(void)
{
	char *buffer = malloc(1024);
	size_t length = 1024;

	while (1)
	{
		printf("$ ");
		getline(&buffer, &length, stdin);
		printf("%s", buffer);
	}
	return (0);
}
