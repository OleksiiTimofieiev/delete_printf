int		get_end_of_printf(char *str)
{
	int i;

	i = 0;
	while (str[i] != ';')
		i++;
	return(i + 1);
}

int 	printf_detection(char *str)
{
	if (*(str + 0) == 'p' && *(str + 1) == 'r' && *(str + 2) == 'i' && *(str + 3) == 'n' && *(str + 4) == 't' && *(str + 5) == 'f' && *(str + 6) == '(')
		return (1);
	else
		return (0);
}

char	*printf_removal(char *str)
{
	int i;
	int end;
	char *tmp;

	tmp = str;
	while (*tmp)
	{
		if (printf_detection(tmp))
		{
			i = 0;
			end = get_end_of_printf(tmp);
			while (i < end)
			{
				*tmp = '+';
				tmp++;
				i++;
			}
		}
		tmp++;
	}
	return (str);
}

int		size_withour_printf(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		if (*str != '+')
			count++;
		str++;
	}
	return (count);
}

char	*copy_without_printf(char *str)
{
	int i;
	char *res;

	i = 0;
	res = (char*)malloc(sizeof(char) * (size_withour_printf(str) + 1));
	while (*str)
	{
		if (*str != '+')
		{
			res[i] = *str;
			i++;
		}
		str++;
	}
	res[i] = '\0';
	return (res);
}

char	*result_without_printf(char *str)
{
	char *p_test = str;

	p_test = printf_removal(p_test);
	p_test = copy_without_printf(p_test);
	
	return (p_test);
}

