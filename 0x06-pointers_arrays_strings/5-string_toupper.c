#include "main.h"

/**
 * string_touper - converting string to upper case
 * @l: string parameter
 * Return : string_toupper
 */
char *string_toupper(char *l)
{
	int i = 0;

	while (l[i])
	{
		if (l[i] >= 97 && l[i] <= 122)
			l[i] = l[i] - 32;
		i++;
	}
	return (l);
}
