#include <stdio.h>

char    *ft_strrev(char *str)
{
	char tmp;
	int len = 0;
	int i = 0;
	while (str[len])
		len++;

	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	printf("%s", ft_strrev(argv[1]));
}