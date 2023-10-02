#include "main.h"

/**
 * read_textfile - read file
 * @filename : file
 * @letters: let
 * Return: the size
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, ptr, tmp;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	ptr = read(file, text, letters);

	tmp = write(STDOUT_FILENO, text, ptr);

	close(file);

	return (tmp);
}
