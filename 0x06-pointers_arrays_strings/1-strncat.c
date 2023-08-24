#include<stdio.h>
/**
 * _strncat - a function that concatenates two strings
 * Description:  appends src string to the dest string,
 * use at most n bytes from src; and src not null-terminated
 * Returns: dest
 * @src: source string
 * dest: destination string
 * @n: bytes from src
 * /

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_length = 0;

	while (dest[index++])
	{
	dest_length++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
	dest[dest_length++] = src[index];
	}
	return (dest);
}

