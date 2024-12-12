#include <stdio.h>

int	ft_strlen(char *str)
{
	if (str == NULL)
		return (0);
	int i = 0;
	while (*str++)
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_strlen(argv[1]));
}