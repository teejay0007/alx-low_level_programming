#include "main.h"
#include <stdlib.h>


/**
 * read_textfile - this program read a text file and prints the letters
 * @filename: filename parameter holder
 * @letters: numbersof letters to be printed .
 *
 * Return:numbers of letters printed. its fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;

	ssize_t nread, nwrite;

	if (!filename)
	/*if the file is null*/
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		/*if file cannot be opened it should return 0*/
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		/*if writes fails to allocate memory*/
		return (0);

	nread = read(fd, buf, letters);
	nwrite = write(STDOUT_FILENO, buf, nread);

	close(fd);

	free(buf);

	return (nwrite);
}
