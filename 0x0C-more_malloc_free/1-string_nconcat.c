#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - concatenate two strings
 * @s1: is a pointer to the first string
 * @s2: is a pointer to the second string
 * @n: an integer (6) with the limit of what we are going to add to s1
 * Return: pointer to a newlly allocated memory with s1 & s2, NULL if it fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strn;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}

	if (n > len2)
		n = len2;
	strn = malloc((len1 + n + 1) * sizeof(char));
	if (strn == NULL)
		return (NULL);
	for (len1 = 0; s1[len1] != '\0'; len1++)
		strn[len1] = s1[len1];
	for (len2 = 0; len2 < n; len2++, len1++)
	strn[len1] = s2[len2];
	strn[len1] = '\0';
	return (strn);
}
