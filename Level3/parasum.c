#include<unistd.h>

int main(int ac, char **av)
{
	for(int i = 0; av[i]; i++)
		av[i] = '\0';
	int a = ac - 1;
	char b = a + '0';
	write(1, &b, 1);
}