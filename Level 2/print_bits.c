#include <unistd.h>
#include <stdlib.h>

void	print_bits(unsigned char octet)
{
	int nb = 0;
	char nbr[]= {'0', '0', '0', '0', '0', '0', '0', '0'};
	int i = 0;
	while (octet)
	{
		nb = (octet % 2) + '0';
		nbr[i++] = nb;
		octet /= 2;
	}
	i = 8;
	while(i > -1)
		write(1, &nbr[i--], 1);
}

int main(int argc, char **argv)
{
	(void)argc;
	print_bits(atoi(argv[1]));
}