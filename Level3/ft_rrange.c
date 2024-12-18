#include <stdlib.h>

int count = 0;

int     *ft_rrange(int start, int end)
{
	int start2 = start;
	int *array;

	if (start == end)
	{
		count = 1;
		array = malloc(1 * sizeof(int));
		array[0] = 0;
		return (array);
	}
	else if (start > end)
	{
		while (start2 >= end)
		{
			start2--;
			count++;
		}
	}
	else
	{
		while (start2 <= end)
		{
			start2++;
			count++;
		}
	}
	array = malloc (count * sizeof(int));

	int i = 0;
	if (start < end)
	{
		while (start <= end)
		{
			array[i++] = end--;
		}
	}
	else
	{
		while (start >= end)
		{
			array[i++] = end++;
		}
	}
	return(array);
}


#include <stdio.h>
int main(int ac, char **av)
{
	int *a;
	int i = 0;
	(void)ac;
	a = ft_rrange(atoi(av[1]), atoi(av[2]));

	while(i < count)
	{
		printf("%5d\n", a[i++]);
	}
	free (a);
}