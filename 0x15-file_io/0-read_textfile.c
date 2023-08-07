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
        return 0;
    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return 0;
    opn = open(filename, O_RDONLY);
    if (opn == -1)
	    return 0;
    red = read(opn, buffer, letters);
    if (red == -1)
    {
	    free(buffer);
	    return 0;
    }
    wrt = write(STDOUT_FILENO, buffer, red);
    if (wrt == -1)
    {
	    free(buffer);
	    return 0;
    }
    close(opn);
    free(buffer);
    return (wrt);   
}
