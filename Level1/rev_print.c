#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}

char *rev_print(char *str)
{
	int size;
	size = ft_strlen(str);
	while (size > -1)
		write(1, &str[size--], 1);
		write(1, "\n", 1);
	return(str);
}

int main(void)
{
	char *str = "Yellow" ;

	printf("%s\n", rev_print(str));
}