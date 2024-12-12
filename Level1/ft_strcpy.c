#include <stdio.h>

char *ft_strlcpy(char *s1, char *s2)
{
	int i = 0;

	while(*s1)
		s2[i++] = *s1++;
	s2[i] = '\0';
	return (s2);
}

int main(int argc, char **argv)
{
	(void)argc;
	char *s2;
	printf("%s", s2 = ft_strlcpy(argv[1], s2));
}