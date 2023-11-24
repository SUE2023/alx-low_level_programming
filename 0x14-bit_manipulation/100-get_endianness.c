#include<stdio.h>
#include"main.h"
/**
 * get_endianness - checks the endianness
 * Description:returning 0 if big endian, 1 if little endian
 * Return: integer 0 or 1
 */
int get_endianness(void)
{
	int test = 1;
	int littleOrBig;

	char *bytePtr = (char *)&test; /*littleOrBig = (int)(((char *) &test)[0]);*/

	littleOrBig = (int)(bytePtr[0]);

	return (littleOrBig);

}
