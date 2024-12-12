#include <unistd.h>

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

void	put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}
int	ft_is_prime(int nb)
{
	int	i;
	int	prime;

	if (nb <= 0)
		return (0);
	prime = 0;
	i = nb / 2;
	while (i > 0)
	{
		if (nb % i == 0)
			prime ++;
		i--;
	}
	if (prime == 1)
		return (1);
	else
		return (0);
}

int main(int ac, char **av)
{	
	if ((ac) == 2)
	{
		int sum = 0;
		int i = 1;
		int n = ft_atoi(av[1]);
		if (n < 0)
			return( write(1,"0\n",2));
		while (i <= n)
		{
			if (ft_is_prime(i))
				sum += i;
			i++;
		}
		put_nbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}