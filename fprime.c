#include <stdlib.h>
#include <stdio.h>

int	check_prime(int n)
{
	int check = 0;
	n = n / 2;
	
	while (n > 0)
	if (n % 2 == 0)
		check++;
	if (check > 1)
		return (0);
	else 
		return (1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int *array;
		int n = atoi(av[1]);
		int n2 = 1;
		while (n >= n2++ )
		{
			if (check_prime(n2))
			{
				if (n % n2 == 1)
			}

		}

	}
	printf("\n");
}