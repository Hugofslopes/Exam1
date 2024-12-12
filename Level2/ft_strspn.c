#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	while (s[i] == accept[i])
		i++;
	if (i == 0)
		return(i);
	else
		return (i - 1);
}

int main(int argc, char **argv)
{
	printf("%ld", ft_strspn(argv[1], argv[2]));
	puts(" ");
	printf("%ld", strspn(argv[1], argv[2]));
}