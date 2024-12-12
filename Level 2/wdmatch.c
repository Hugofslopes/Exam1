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
		int count = 0;
		int len1 = 0;
		int a = 0;
		while (av[1][len1])
			len1++;

		for (int j = 0; av[2][j]; j++)
		{
			if (av[1][0] == av[2][j])
			{
				seen[a++] = av[1][0];
				count++;
				break;
			}
		}
		for (int i = 1; av[1][i]; i++)
		{
			for (int j = 0; av[2][j]; j++)
			{
				if (av[1][i] == av[2][j])
				{
					if (!non_string(av[1][i]))
					{	
					count++;
					seen[a++] = av[1][i];
					}
				}
			}
		}

		if (count += len1)
		{
			for (int i = 0; av[1][i]; i++)
				write(1, &av[1][i], 1);
		}
	}
	write(1, "\n", 1);
}