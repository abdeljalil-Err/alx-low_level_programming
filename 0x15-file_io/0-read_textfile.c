#include "main.h"

/**
 * ssize_t read_textfile - function that reads a text file and prints it to the POSIX standard output.
 * @letters: is the number of letters.
 * Return: returns the actual number of letters it could read and print,
 *         return 0 if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t opn, red, wrt;
    int fd;
    char *buffer;

    if (filename == NULL)
        return (0);
    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return (0);
    opn = open(filename, O_RDONLY);
    red = read(opn, buffer, letters);
    wrt = write(opn, buffer, red);

    close(opn);
    free(buffer);
    return (wrt);   
}
