#include "main.h"
/**
 * _comparestring - compares two strings
 *
 * @s: the first bit of string
 * @p: last bit of the string
 * Return: 0 if not and 1 if equal
 */
int _comparestring(char *s, char *p)
{
	if (*s == '\0')
		return (1);
	if (*s == *p)
		return (_comparestring(++s, --p));
	else
		return (0);
}
/**
 * _reverse - this reverse the string to see if is the same
 *
 * @s: char pointer to check
 *
 * Return: return to the pointer in reverse
 *
 */
char *_reverse(char *s)
{
	if (*s != '\0')
		return (_reverse(++s));
	else
		return (--s);
}
/**
 * is_palindrome - the given function reeturning extra functions
 * _ultima - this will reverse the string
 *
 * @s: char pointer to check
 *
 * Return: 1 if is palindrome 0 if is not
 */
int is_palindrome(char *s)
{
	char *p;

	p = _reverse(s);
	return (_comparestring(s, p));
}
