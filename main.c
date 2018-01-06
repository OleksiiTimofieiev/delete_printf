#include "remove_printf.h"

int		main()
{
	//int argc && argv
	char test[] = "[\n***** Start->0printf(, sdfsdfsdf);12printf(, sdfsdfsdf);34printf(, sdfsdfsdf);678printf(, sdfsdfsdf);9<-End *****\n]"; //should be the read from the file
	char *result = result_without_printf(test);

	printf("%s\n", result); // should be write to the file

	return (0);
}