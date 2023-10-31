#include<stdio.h>
#include"main.h"
#include<stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * Description:  which contains a copy of the string as a parameter
 * @str: string
 * Return: (ptstr)
 */
char *_strdup(char *str)
{
	char *ptstr;
	int strlength = 0;
	int count;

	if (str == NULL)
		return (NULL);
	/* to know length of the string */
	count = 0;
	while (str[count] != '\0')
		count++;
	/* size in bytes to be allocated */
	ptstr =	(char *)malloc(sizeof(char) * (count + 1));
	/*check if malloc does not return null */
	if (ptstr == NULL)
		return (NULL);
	/* copying this string to the new memory location */
	for (strlength = 0; str[strlength] != '\0'; strlength++)
		ptstr[strlength] = str[strlength];
	ptstr[strlength] = '\0';
	/*return a pointer to the first element of the string */
	return (ptstr);
}
