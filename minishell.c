#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		printf("%c", *str);
		str++;
	}
}

int	main()
{
	printf("%s", "Hola Mundo!");
}
