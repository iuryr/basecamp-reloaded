#include <unistd.h>

void	ft_putstr(char *str);
void	ft_print_params(int argc, char *argv[]);
int	ft_strcmp(char *s1, char *s2);
void	ft_swap(char **param1, char **param2);
void	ft_sort_params(int argc, char *argv[]);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_print_params(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] != '\0')
	{
		if  (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **p1_addr, char **p2_addr)
{
	char *tmp;

	tmp = *p1_addr;
	*p1_addr = *p2_addr;
	*p2_addr = tmp;
}

void	ft_sort_params(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = i +1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;

		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (0);
	else
	{
		ft_sort_params(argc, argv);
		ft_print_params(argc, argv);

	}
	return (1);
}
