#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	int max = -2147483648;
	while (--len)
	{
		if (tab[len] > max)
			max = tab[len];
	}
	return (max);	
}


int main()
{
	int array[] = {500, 0, -10, 495, 85, -259};
	printf("%10d",max(array, 6 ));
}
