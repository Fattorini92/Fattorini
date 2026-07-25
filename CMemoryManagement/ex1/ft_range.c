/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 15:48:47 by gfattori          #+#    #+#             */
/*   Updated: 2026/07/23 15:48:49 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int *ft_range(int min, int max)
{
    int *tab;
    int i;
    int lenght;

    i = 0;
    lenght = max - min;
    tab = malloc(lenght * sizeof(int));
    //If min’s value is greater or equal to max’s value, a null pointer should be returned.
    if (min >= max)
        return (NULL);
    while (i < lenght)
    {
        tab[i] = min + i;
        i++;
    } 
    tab[i+1] = '\0';
    return(tab);
}

/*
int main ()
{
	int tab[] = {1,2,3,4,5,6,7,8,9};
	ft_foreach(tab, 5, &ft_putnbr);
    write(1, "\n", 1);
    ft_foreach(ft_range(10,20), 10, &ft_putnbr);
}
*/