#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int len = 0;
		while (argv[2][len])
			len++;
		char str[len + 1];
		int k = 0;
		while (str[k])
			str[k++] = '\0';
		int m = 0;
		for (int i = 0; argv[1][i]; i++)
		{
			for (int j = 0; argv[2][j]; j++)
			{
				if (argv[1][i] == argv[2][j])
				{
					int h = 0; 
					while (argv[1][i] != str[h] && str[h])
						h++;
					if (argv[1][i] != str[h])
						str[m++] = argv[1][i];
					break;
				}
			}
		}
		k = 0;
		while (str[k])
			write(1, &str[k++], 1);
	}
	write(1, "\n", 1);
}
