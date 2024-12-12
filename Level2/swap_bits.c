#include <stdio.h>
#include <stdlib.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%10d", swap_bits(atoi(argv[1])));
}
