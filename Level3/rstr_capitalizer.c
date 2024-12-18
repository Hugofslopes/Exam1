#include <unistd.h>
int main(int ac,  char **av)
{
	char c;
	int i = 1;
	int j = 0;
	if (ac >= 2)
	{
		while (i <= (ac - 1))
		{
			while (av[i][j] != '\0')
			{
				if ((av[i][j] >= 'a' && av[i][j] <= 'z') || (av[i][j] >= 'A' && av[i][j] <= 'Z'))
				{
					if (av[i][j + 1] == ' ' || av[i][j + 1] == '\t' || av[i][j - 1] == '\t' || j == 0 || av[i][j + 1] == '\0')
					{
						if ((av[i][j] >= 'a' && av[i][j] <= 'z'))
							c = av[i][j] - 32;
						else
							c = av[i][j];
						write(1, &c, 1 );
					}
					else
					{
						if ((av[i][j] >= 'A' && av[i][j] <= 'Z'))
							c = av[i][j] + 32;
						else
							c = av[i][j];
						write(1, &c, 1 );
					}
				}
				else
				{
					c = av[i][j];
					write(1, &c, 1);
				}
				j++;
			}
			write(1, "\n", 1 );
			i++;
			j = 0;
		}
	}
	else
		write(1, "\n", 1 );
}