#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * error_exit - Print error message and exit with status 98.
 * @msg: The error message to print.
 */
void error_exit(char *msg)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(98);
}

/**
 * main - Display ELF header information of an ELF file.
 * @argc: The number of arguments.
 * @argv: The arguments array.
 *
 * Return: 0 on success, or exit with status 98 on error.
 */
int main(int argc, char *argv[])
{
    int fd, read_status;
    Elf64_Ehdr header;
    unsigned char e_ident[EI_NIDENT];

    if (argc != 2)
        error_exit("Usage: elf_header elf_filename");

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        error_exit("Error: Can't open file");

    read_status = read(fd, e_ident, EI_NIDENT);
    if (read_status == -1 || read_status != EI_NIDENT)
        error_exit("Error: Can't read from file");

    if (e_ident[EI_MAG0] != ELFMAG0 || e_ident[EI_MAG1] != ELFMAG1 ||
        e_ident[EI_MAG2] != ELFMAG2 || e_ident[EI_MAG3] != ELFMAG3)
        error_exit("Error: Not an ELF file");

    lseek(fd, 0, SEEK_SET);

    read_status = read(fd, &header, sizeof(header));
    if (read_status == -1 || read_status != sizeof(header))
        error_exit("Error: Can't read from file");

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x ", e_ident[i]);
    printf("\n");
    printf("  Class:                             ");
    switch (header.e_ident[EI_CLASS])
    {
        case ELFCLASSNONE: printf("ELFCLASSNONE\n"); break;
        case ELFCLASS32:   printf("ELF32\n");       break;
        case ELFCLASS64:   printf("ELF64\n");       break;
        default:           printf("<unknown>\n");  break;
    }
    printf("  Data:                              ");
    switch (header.e_ident[EI_DATA])
    {
        case ELFDATANONE: printf("ELFDATANONE\n"); break;
        case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
        case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
        default:          printf("<unknown>\n"); break;
    }
    printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            ");
    switch (header.e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV:    printf("UNIX - System V\n");     break;
        case ELFOSABI_NETBSD:  printf("UNIX - NetBSD\n");       break;
        case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n");      break;
        default:               printf("<unknown: %x>\n", header.e_ident[EI_OSABI]); break;
    }
    printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (header.e_type)
    {
        case ET_NONE:   printf("NONE (None)\n");   break;
        case ET_REL:    printf("REL (Relocatable file)\n"); break;
        case ET_EXEC:   printf("EXEC (Executable file)\n"); break;
        case ET_DYN:    printf("DYN (Shared object file)\n"); break;
        case ET_CORE:   printf("CORE (Core file)\n"); break;
        default:        printf("<unknown>\n"); break;
    }
    printf("  Entry point address:               0x%lx\n", header.e_entry);

    close(fd);
    return (0);
}

