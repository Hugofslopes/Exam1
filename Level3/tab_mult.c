#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		int nb = 0;
		int nb2 = 0;
		char *array;
		int k = 0;
		char c;
		
		for (int j = 0; av[1][j]; j++)
		{
			nb = nb * 10 + (av[1][j] - '0');
		}
		int i = 1;
		while (i < 10)
		{
			c = i + '0';
			write(1, &c, 1);
			write(1, " x ", 3);
			for (int j = 0; av[1][j]; j++)
				write(1, &av[1][j], 1);
			write(1, " = ", 3);
			nb2 = nb * i;
			while(nb2)
			{
				c = (nb2 % 10) + '0';
				array[k++] = c;
				nb2 /= 10;
			}
			while(--k >=0)
			{
				c = array[k];
				write(1, &c, 1);
			}
			k = 0;
			write(1, "\n", 1);
			i++;
		}
	}
}