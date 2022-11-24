#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rw;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rw = write(fd, text_content, nletters);
	if (rw == -1)
		return (-1);
	close(fd);
	return (1);
}
