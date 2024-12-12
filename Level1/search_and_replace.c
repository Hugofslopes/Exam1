#include <unistd.h>

int ft_strlen (char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int main( int argc, char **argv)
{
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) > 1 || ft_strlen(argv[3]) > 1 )
			return (write(1, "\n", 1));
		for (int i = 0; argv[1][i]; i++)
		{
			for (int j = 0; argv[2][j]; j++)
			{
				if (argv[1][i] == argv[2][j])
					write(1, &argv[3][j],1);
				else 
					write(1, &argv[1][i],1);
			}
		}
	}
	write(1, "\n", 1);
}
