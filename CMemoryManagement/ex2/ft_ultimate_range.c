/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 16:40:56 by gfattori          #+#    #+#             */
/*   Updated: 2026/07/23 16:40:58 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create a function ft_ultimate_range which allocates and assigns an array of ints. This
//int array should contain all values between min and max.
//• Min included - max excluded.
//int ft_ultimate_range(int **range, int min, int max);
//• The size of range should be returned (or -1 on error).
//• If the value of min is greater or equal to max’s value, range will point to NULL and it
//should return 0.

#include <unistd.h>
#include <stdlib.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	n;

	n = nb;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * -1);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
	{
		ft_putchar(n + '0');
	}
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
        write(1, " ",1);
		i++;
	}
}
*/

int ft_ultimate_range(int **range, int min, int max)
{
    int i;

    if (min >= max)
    {    
    *range = NULL; 
        return (0);
    }
    *range = malloc(sizeof(int) * (max - min));
    if (*range == NULL)
    {
    return (-1);
    }
    i = 0;
    while (i < (max - min))
    {
        (*range)[i] = min + i;
        i++;
    } 
    return(max - min);
}

/*
int main ()
{
    int *tableau;
    int lenght = ft_ultimate_range(&tableau, 5, 15);    
    int tab[] = {1,2,3,4,5,6,7};
    ft_foreach(tab, 5, &ft_putnbr);
    write(1, "\n", 1);
    ft_putnbr(lenght);
    write(1, "\n", 1);
    ft_foreach(tableau, lenght, &ft_putnbr);
}
*/