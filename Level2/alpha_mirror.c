#include <unistd.h>

int main(int argc, char **argv)
{
	char c;
	if (argc == 2)
	{
		for (int i = 0; argv[1][i]; i++)
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
			{
				c = 'z' - (argv[1][i] - 'a');
				write(1,&c, 1);
			}
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
			{
				c = 'a' + ('z' - argv[1][i]);
				write(1,&c, 1);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
			{
				c = 'Z' - (argv[1][i] - 'A');
				write(1,&c, 1);
			}
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
			{	
				c = 'A' + ('Z' - argv[1][i]);
				write(1,&c, 1);
			}
			else
				write(1,&argv[1][i], 1);
		}
	}
	write(1,"\n", 1);
}


// a b c d e f g h i j k l m
// z y x w v u t s r q p o n