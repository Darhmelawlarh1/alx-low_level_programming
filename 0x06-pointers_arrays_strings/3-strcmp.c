#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared.
 * Return: If str1 < str2, the negative difference of the first unmatched char
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
		return (diff);
}

