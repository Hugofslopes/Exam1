#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

int main(int argc, char **argv)
{
	(void)argc;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	printf("a-%10d\nb-%10d\n", a, b);
	ft_swap(&a, &b);
		printf("a-%10d\nb-%10d\n", a, b);
}