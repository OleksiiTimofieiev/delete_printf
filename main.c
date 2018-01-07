#include "remove_printf.h"

int		main(int argc, char **argv)
{
	char	*read_file;
	char	*result;

	if (argc > 1)
	{
		read_file = write_file_to_variable(argv[1]);
		result = result_without_printf(read_file);
		free(read_file);

		// write to the file
	}
	else
		printf("%s\n", "\nError:\n\nPlease, choose arguments for the binary file.\n");
	return (0);
}