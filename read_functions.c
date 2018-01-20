int		char_file_size(char *com_line_parameter)
{
	int		count;
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE];

	count = 0;
	fd = open(com_line_parameter, O_RDONLY);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
		count++;
	close(fd);
	return (count);
}

char	*write_file_to_variable(char *com_line_parameter)
{
	int		ret;
	int		i;
	int		fd;
	char	*res;
	char	buf[BUFF_SIZE];

	i = 0;
	res = (char*)malloc(sizeof(char) * (char_file_size(com_line_parameter) + 1));
	fd = open(com_line_parameter, O_RDONLY);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		res[i] = *buf;
		i++;
	}
	close(fd);
	res[i] = '\0';
	return (res);
}
