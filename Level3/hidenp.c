#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int a = 0;
		int i = 0;
		int j = 0;
		int count = 0;

		while(av[1][a])
			a++;
		while (j < a && av[2][i])
		{
			if (av[1][j] == av[2][i++])
			{
				count++;
				j++;
				continue;
			}
		}
		if (count == a)
			write(1, "1",1);
		else 
			write(1, "0",1);
	}
	write(1, "\0",1);
}