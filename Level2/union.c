#include <unistd.h>

unsigned char seen[256] = {0};

int non_string(char c)
{	
	int i = 0;
	while(seen[i])
		if (c == seen[i++])
			return(1);
	return(0);
}
int main(int ac, char **av)
{
	if (ac == 3)
	{
		int a = 0;
		write(1, &av[1][0], 1);
		seen[a++] = av[1][0];
		for (int i = 1; av[1][i]; i++)
		{
			if (!non_string(av[1][i]))
			{
				write(1, &av[1][i], 1);
				seen[a++] = av[1][i];
			}
		}
		for (int i = 0; av[2][i]; i++)
		{
			if (!non_string(av[2][i]))
			{
				write(1, &av[2][i], 1);
				seen[a++] = av[2][i];
			}
		}
	}
	write(1, "\n",1);
}