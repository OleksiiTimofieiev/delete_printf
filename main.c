#include "remove_printf.h"

int		main(int argc, char **argv)
{
	if (argc == 2)
	{//int argc && argv
	// printf("%d\n", argc);
	// printf("%d", char_file_size(argv[1]));
	char *file = write_file_to_variable(argv[1]);
	// char test[] = "[\n***** Start->0printf(, sdfsdfsdf);12printf(, sdfsdfsdf);34printf(, sdfsdfsdf);678printf(, sdfsdfsdf);9<-End *****\n]"; //should be the read from the file
	char *result = result_without_printf(file);

	printf("%s\n", result); // should be write to the file
}

	return (0);
}