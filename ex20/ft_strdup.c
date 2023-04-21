#include <stdlib.h>

char *ft_strdup(char *src);

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	char *dest;
	int	size;
	int	i;

	i = 0;
	size = ft_strlen(src) + 1;
	dest = malloc(size);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (dest);
}
