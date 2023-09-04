#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This function Read text file and
 * print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- the actual number of bytes read and printed
 *         0 - readfile failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t filedata;
	ssize_t writefile;
	ssize_t readfile;

	filedata = open(filename, O_RDONLY);

	if (filedata == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	readfile = read(filedata, buffer, letters);
	writefile = write(STDOUT_FILENO, buffer, readfile);

	free(buffer);
	close(filedata);
	return (writefile);
}
