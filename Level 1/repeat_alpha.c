#include <unistd.h>

void print_x_times(char c, char nbr_times)
{
	char l[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'y', 'z'};
	char u[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'Y', 'Z'};

	int i = 0;
	if (nbr_times > 90)
	{
		while (l[i])
		{
			if (l[i] == nbr_times)
				break;
			i++;
		}
	}
	else
	while (u[i])
		{
			if (l[i] == nbr_times)
				break;
			i++;
		}
	i += 1;
	while (i)
	{
		write(1, &c, 1);
		i--;
	}
}


int main( int argc, char **argv)
{
	if (argc == 2)
	{
		for (int i = 0; argv[1][i]; i++)
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z' || argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				print_x_times(argv[1][i], argv[1][i]);
			else
				write(1, &argv[1][i], 1);
		}
	}
	write(1, "\n", 1);
}