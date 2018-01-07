#include "remove_printf.h"

int		main(int argc, char **argv)
{
	char	*file;
	char	*result;

	if (argc > 1)
	{
		file = write_file_to_variable(argv[1]);
		result = result_without_printf(file);
		free(file);

		// write to the file
	}
	return (0);
}