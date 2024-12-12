#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	while (s[i])
	{
		for (size_t j = 0; reject[j]; j++)
		{
			if (s[i] == reject[j])
				return (i);
		}
		i++;
	}
	return(i);
}


int main(int argc, char **argv)
{
	printf("%10ld", ft_strcspn(argv[1], argv[2]));
}