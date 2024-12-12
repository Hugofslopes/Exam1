#include <stdio.h>
#include <stdlib.h>

unsigned char reverse_bits(unsigned char octet)
{
	int nb = 0;
	int i = 8;
	while (i > 0)
	{
		nb = nb * 2 + (octet % 2);
		octet /= 2;
		i--;
	}	
	return(nb);
}


int main(int argc, char **argv)
{
	(void)argc;
	printf("%10d", reverse_bits(atoi(argv[1])));
}