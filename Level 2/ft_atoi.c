#include <stdio.h>

int	ft_atoi(const char *str)
{
	int result = 0;
	int sign = 1;

	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (*str)
		result = result * 10 + (*str++ - '0');
	return(result * sign);
}

int main(int argc, char **argv)
{
	printf("%10d", ft_atoi(argv[1]));
}