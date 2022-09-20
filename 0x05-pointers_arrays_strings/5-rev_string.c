#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: String
 *
 * Return: void
 *
 */
void rev_string(char *s)
{

	char *begin, *end, ch;
    	int i;

	int l = 0;

	while (s[l] != '\0')
       	{
		l++;
	}
	begin = s;
	end = s;

	for (i = 0; i < l - 1; i++)
	{
		end++;
	}

	for (i = 0; i < l /2; i++)
	{
		ch = *end;
		*end = *begin;
		*begin = ch;

		begin++;
		end--;
	}
}
