#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int space = 0;
		int i = 0;
		while(argv[1][i])
		{
			if(argv[1][i++] == ' ')
				space = i;
		}
		if (space != i)
			while(argv[1][space])
				write(1, &argv[1][space++] ,1);
		else
		{
			i--;
			while(argv[1][i] == ' ')
				i--;
			while(argv[1][i] != ' ')
			{
				i--;
			}
			i++;
			while(argv[1][i] != ' ')
			{
				write(1, &argv[1][i++] ,1);
			}
		}
	}
	write(1, "\n", 1);
}