#include "main.h"
/**
 * append_text_to_file -this function appends text
 * at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: function failed =  NULL - -1.
 *         write permissions failed - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openfile;
	int writefile;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	openfile = open(filename, O_WRONLY | O_APPEND);
	writefile = write(openfile, text_content, length);

	if (openfile == -1 || writefile == -1)
		return (-1);

	close(openfile);

	return (1);
}
