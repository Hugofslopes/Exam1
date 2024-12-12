#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	int length = 0; 
	while (src[length])
		length++;

	char *str = malloc((length + 1) * sizeof(char));
	if (!str)
		return(NULL);
		int i = 0;
	while (src[i])
		str[i]= src[i++];
	src[i] = '\0';
	return(src);
}

int main(int argc, char **argv)
{
	char *str;
	
	printf("%s", str = ft_strdup(argv[1]));
	free(str);
}