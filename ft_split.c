#include <stdlib.h>

int count_words(char *str)
{
	int i = 0;
	int count = 0;
	while (str[i])
	{
			while (str[i] == 32 || (str[i] >= 7 && str[i] <= 13))
				i++;
			while (str[i] > 32 && str[i] < 127 )
			{
				i++;
				if (!(str[i] > 32 && str[i] < 127 ))
					count ++;
			}
	}
	return (count);
}

void free_strgs(char **strgs)
{
	int i = 0;
	while (strgs[i])
		free(strgs[i++]);
	free(strgs);
}
char **creat_strgs(char **strgs, char *str)
{
	int i = 0;
	int j = 0;
	while(*str)
	{
		while (*str == 32 || (*str >= 7 && *str <= 13))
			str++;
		while ((str[i] > 32 && str[i] < 127 ))
			i++;
		strgs[j] = malloc( (i + 1) *sizeof(char));
		if (!strgs)
		{
			free_strgs(strgs);
			return (NULL);
		}
		i = 0;
		while ((*str > 32 && *str < 127 ))
			strgs[j][i++] = *str++;
		strgs[j][i] = '\0';
		j++;
	}
	strgs[j] = NULL;
	return(strgs);
}

char **ft_split(char *str)
{
	if (!str)
		return (NULL);
	
	int nr_words = 0;
	nr_words = count_words(str);
	char **strgs;
	strgs = malloc((nr_words + 1) * sizeof(char *));
	creat_strgs(strgs, str);
}

#include <stdio.h>
int main(int ac, char**av)
{
	char **str;
	str = ft_split(av[1]);
	for (int i = 0; str[i]; i++)
		printf("%s\n", str[i]);
}