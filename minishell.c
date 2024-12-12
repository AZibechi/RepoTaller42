

void	ft_putstr(char *str)
{
	while (*str)
	{
		printf("%c", *str);
		str++;
	}
}


#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main()
{
	printf("%d", ft_putstr("Hello World"))
}
