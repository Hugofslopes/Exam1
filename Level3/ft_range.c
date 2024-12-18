#include <stdlib.h>

int count = 0;

int     *ft_range(int start, int end)
{
	int start2 = start;
	int *array;

	if (start == end)
	{
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
	if (start > end)
	{
		while (start >= end)
		{
			array[i++] = start--;
		}
	}
	else
	{
		while (start <= end)
		{
			array[i++] = start++;
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
	a = ft_range(atoi(av[1]), atoi(av[2]));

	while(i < count)
	{
		printf("%5d\n", a[i++]);
	}
	free (a);
}