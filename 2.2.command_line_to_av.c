#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *main-prototype
 *Return: 0
 */
int main(void)
{
	char *buffer = malloc(1024);
	size_t length = 1024;
	char *token;

	while (1)
	{
		printf("$ ");
		getline(&buffer, &length, stdin);
		printf("buffer getline: %s", buffer);
	}
	token = strtok(buffer, " ");
	while (token)
	{
		printf("buffer strtok: %s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
