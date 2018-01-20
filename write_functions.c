char	*get_name(char *str)
{
	int		i;
	int 	len;
	char	*name;

	i = 0;
	len = strlen(str);
	name = (char*)malloc(sizeof(char) * (len + 1));
	while (str[i])
	{
		name[i] = str[i];
		i++;
	}
	name[i] = '\0';
	return (name);
}

void	write_to_file(char *name, char *source)
{
	
	char ch;
	FILE *out;

	out = fopen(name, "w");

	while ((ch = *source) != '\0')
	{
		putc(ch, out);
		source++;
	}
	fclose(out);
}
