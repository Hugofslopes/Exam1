#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	size_t i = 0;
	char *str1 = (char *)s1;
	char *str2 = (char *)s2;
	while (*str1)
	{
		for (size_t j = 0; str2[j]; j++)
		{
			if (*str1 == str2[j])
				return (str1);
		}
		str1++;
	}
	return(NULL);
}

int main(int argc, char **argv)
{
	char *str;
	
	printf("%s", ft_strpbrk(argv[1], argv[2]));
	puts(" ");
	printf("%s", strpbrk(argv[1], argv[2]));
}