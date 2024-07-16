#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: a string given by main
 * Return: pointer or null
 */
char *_strdup(char *str)
{
	char *a;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	a = malloc(sizeof(char) * i + 1);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		a[i] = str[i];
		i++;
	}
	a[i] = str[i];
	return (a);
}
