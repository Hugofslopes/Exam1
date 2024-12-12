#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{	
		int n = atoi(argv[1]);
		int n2 = atoi(argv[3]);

		if (argv[2][0] == '+')
			printf("%d", (n + n2));
		if (argv[2][0] == '-')
			printf("%d", (n - n2));
		if (argv[2][0] == '*')
			printf("%d", (n * n2));
		if (argv[2][0] == '/')
			printf("%d", (n / n2));
		if (argv[2][0] == '%')
			printf("%d", (n % n2));
				
	}
	printf("\n");
}
