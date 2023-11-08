#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_opcodes(char* start, int numBytes)
{
	int index;

	for (index = 0; index < numBytes; index++)
		printf("%02x", (unsigned char)start[index]);
	printf("\n");
}
int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int numBytes = atoi(argv[1]);
	
	if (numBytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	/* Calculate the address of the start of the main function */
	char* main_start = (char*)&main;
	print_opcodes(main_start, numBytes);
	
	return (0);
}
