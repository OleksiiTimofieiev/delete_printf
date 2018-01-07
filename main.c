#include "remove_printf.h"

int		main(int argc, char **argv)
{
	int		i;
	int		ret;
	char	*read_file;
	char	*name;
	char	*result;

	i = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			read_file = write_file_to_variable(argv[i]);
			result = result_without_printf(read_file);
			free(read_file);
			name = get_name(argv[i]);
			ret = remove(name);
			write_to_file(name, result);
			free(name);
			i++;
		}
	}
	else
		printf("%s\n", "\nError:\n\nPlease, choose arguments for the binary file.\n");
	return (0);
}