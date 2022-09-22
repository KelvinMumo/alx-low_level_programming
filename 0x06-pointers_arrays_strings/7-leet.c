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
	    char c[] = "aAeEoOtTlL";
	    char n[] = "4433007711";

	    i = 0;

	    while (str[i] != '\0')
	    {
		    j = 0;

		    while (c[j] != '\0')
		    {
			    if (str[i] == c[j])
			    {
				    str[i] = n[j];
			    }
			    j++;
		    }
		    i++;
	    }
	    return (str);
}
