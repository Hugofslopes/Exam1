unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n = 0;

	if (a == n || b == n)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}

#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
	printf("%d", lcm(atoi(av[1]), atoi(av[2])));
}