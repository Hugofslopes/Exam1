#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int len = 0;
		while (argv[1][len])
			len++;
		char str[len +1 ];
		int j = 0;
		char c;
		for (int i = 0; argv[1][i]; i++)
		{
			if (argv[1][i] == '_')
			{	
				i++;
				c = argv[1][i] - 32;
				str[j++] = c;
				i++;
			}
			str[j++] = argv[1][i];
		}
		for (int k = 0; str[k]; k++)
			write(1, &str[k],1);
	}
}
