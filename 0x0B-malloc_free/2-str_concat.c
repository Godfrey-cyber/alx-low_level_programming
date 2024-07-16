#include "main.h"
#include <stdio.h>
#include <stdlib.h>
 /**
  * char *str_concat -  function that concatenates two strings
  * @s1: the first string main gives us
  * @s2: the second string main gives us
  * Return: the pointer or null if string is null
  */
char *str_concat(char *s1, char *s2)
{
	char *pointer;
	int j = 0;
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j] == NULL)
		j++;
	pointer = malloc(1 + (sizeof(char) * j) + (sizeof(char) * j));
	if (pointer == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		pointer[i] =  s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		pointer[i] = s2[j];
		i++;
		j++;
	}
	pointer[i] = s2[j];
	return (pointer);
}
