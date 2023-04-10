#include  "main.h"
/**
 *
 *
 *
 *
 */
int main(int argc, char **argv)
{
	int f1, f2, r, w;
	char b[1024];
	mode_t mode = S_IRUSR | S_IRGRP | S_IWGRP |S_IROTH;
	if (argc != 3)
		return (dprintf(STDERR_FILENO, "Usage: cp file_from file_to"), 97);

	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
		return (dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), 98);

	f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (f2 == -1)
		return (dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), 99);

	do {
		r = read(f1, b, sizeof(b));
		if (r == -1)
			return (dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), 98);

	w = write(f2, b, r);
	if (w == -1)
	return (dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), 99);	
	}
	while (r > 0);

	if (close(f1) == -1)
		return (dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), 100);

	if (close(f2) == -1)
		return (dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), 100);

	return (0);
}
