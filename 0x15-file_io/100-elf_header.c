#include<elf.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - Checks if a file is an ELF
 * Description: if not exit code 98
 * @e_ident: Pointer to an array containing the ELF magic numbers
 * Return: void
 */
void check_if(unsigned char *e_ident)
{
	int index;
	for (index = 0; indext < 4; index++)
	{
		if (e_ident[index] != 127 &&
				e_ident[index] != 'E' &&
				e_ident[index] != 'L' &&
				e_ident[index] != 'F')
		{
			dpritntf(STDERR_FILENO, "Error: Not an ELF\n");
			exit(98);
		}

	}
	return

}
/**
 * print_magic - prints the magic of an ELF header
 * Description: separated by spaces
 * @e_ident: A pointer to an array containing the ELF magic numbers
 * Return: void
 */
void print_magic(unsigned char *e_ident)
{
	int index;
	
	printf("  Magic:   ");

	for (index = 0; indext <EI_NIDENT; index++)
	{
		printf("%02x", e_ident[indent]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf("   ");
	}
	return;

}
/**
 * print_class - prints the class
 * Description: of an ELF header
 * @e_ident: a pointer to an array containing ELF class
 * Return: void
 */
void print_class(unsigned char *e_ident)
{
	printf("   Class:                     ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCALSSNONE:
			printf("none\n");
			break;
		case ELFCALSS32:
			printf("ELF31\n");
			break;
		case ELFCLASS64:
			prinft("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
	return;

}
/**
 * print_data - prints the data
 * Description: of ELF header
 * @e_ident: pointer to an array conting the ELF class
 * Return: void
 */
void print_data(unsigned char *e_ident)
{
	printf("   Data:                     ");
	
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default;
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
	return;

}
/**
 * print_version - prints
 * Description: the version of an ELF header
 * @e_ident: a pointer to an array containing the ELF version
 * Return: void
 */
void print_version(unsigned char *e_ident)
{
	printf("   Version:                     %d", e_dent[EI_VERSION]);

	if(e_ident[EI_VERSION])
	{
		if (EV_CURRENT)
			printf("   (current)\n");
		else
			printf("\n");
	}
	return;

}
/* RESEARCH MORE*/
void print_osabi(unsigned char *e_ident)
{
	printf("   OS/ABI:                     ");
	
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaries\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreedBSD\n");
			break;
		case ELFOSABI_TRU64;
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
	return;

}
/**
 * print_abi - prints the ABI version
 * Description: of an ELF header
 * @e_ident: a pointer to an array containing the ELF ABI version
 * Return: void
 */
/* RESEARCH MORE */
void print_abi(unsigned char *e_ident)
{
	printf("   ABI Version:                    %d\n",);
}

/**
 * printe_type - prints the type
 * Description: of an ELF header
 * @e_type: the ELF type
 * @e_ident a pointer to the array containing the ELF class
 * Return: void
 * */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("   Type:                     ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DNY (Shared Object file)"\n);
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unkown: %x>", e_type);
	}
	return;

}

/**
 * print_entry - print the entry point
 * Description: of an ELF header
 * @entry: address of the ELF entry point
 * Return: integer
 */


