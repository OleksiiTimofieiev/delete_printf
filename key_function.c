char	*result_without_printf(char *str)
{
	char *p_test = str;

	p_test = printf_removal(p_test);
	p_test = copy_without_printf(p_test);
	
	return (p_test);
}