#include <unistd.h>

int main(int argc, char const *argv[])
{
	int i;

	if (argc == 2)
	{
		int i = 0;
		while(argv[1][i])
		{
			while (argv[1][i] == 32 || argv[1][i] >= 7 && argv[1][i] <= 13)
				i++;
			while (argv[1][i] >= 32 && argv[1][i] < 127)
			{
				while (argv[1][i] > 32 && argv[1][i] < 127)
					{
						write(1, &argv[1][i++], 1);
					}
					write(1, "   ", 3);
				while (argv[1][i] == 32)
					i++;
			}
		}
	}
	write(1, "\n", 1);
}