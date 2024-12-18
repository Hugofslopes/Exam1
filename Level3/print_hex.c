#include<unistd.h>

int main(int ac,  char **av)
{
	if (ac == 2)
	{
		char base[] = "0123456789abcdef";
		int i = 0;
		int nb;
		int nbr = 0;
		char c;
		char a[10];


		while (av[1][i])
		{
			nb = nb * 10 + (av[1][i] - '0');
			i++;
		}
		i = 0;
		while (nb)
		{
			nbr = nb % 16;
			c = base[nbr];
			a[i++]= c;
			nb = nb / 16;
		}
		while (--i)
			write(1, &(a[i]), 1);
	}
	write(1, "\n", 1);
}