#include "main.h"

/**
 * leet - Encodes a string into 1337.
 *
 * @str: String Parameter
 *
 * Return: str
 *
 */
char *leet(char *str)
{
	    int i;
	    int j;

	    char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	    i = 0;

	    while (str[i])
	    {
		    for (j = 0; j <= 7; j++)
		    {
			    if (str[i] == leet[j] ||
					    str[i] - 32 == leet[j])
			    {
				    str[i] = j + '0';
			    }
		    }

		    i++;
	    }
	    return (str);
}
