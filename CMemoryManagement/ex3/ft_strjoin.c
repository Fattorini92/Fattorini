/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 17:58:34 by gfattori          #+#    #+#             */
/*   Updated: 2026/07/23 17:58:36 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Write a function that will concatenate all the strings pointed by strs separated by sep.
//• size is the number of strings in strs
//• if size is 0, you must return an empty string that you can free().

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

void	ft_foreachwrite(char *src, void (*f)(char))
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		f(src[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strstrlen(char **strs, int (*f)(char*))
//counts all the size of all the strings inside the string
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (*strs[i])
	{
			counter = counter + f(strs[i]);
    		i++;
	}
	return (counter);
}

int	retour(char *tableau)
{
	int	i;

	if (tableau[i] == '\0')
		return (0);
	else
		return (1);
}

int	ft_strcounter(char **tab, int (*f)(char*))
//counts how many strings inside a string
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (*tab[i])
	{
		if ((*f)(tab[i]) != 0)
		{
			counter++;
		}
		i++;
	}
	return (counter);
}

int fusionsize (char **strs, char *sep)
{
    int fusion;

    fusion = (ft_strcounter(strs, retour) * 2) - 1;
    return(fusion);
}


char *ft_strjoin(int size, char **strs, char *sep)
{
    char *concatenate;
    int i;
    
    concatenate = malloc(ft_strstrlen(strs,ft_strlen) * sizeof(char) + size * (sizeof(sep)/sizeof(char)));
    if (size = 0)
    {
        return (NULL);
    }
    i = 0;
    while (i < size)
    {
        concatenate[i] = *strs[i];
		while (i < size - 1)
		{
			concatenate[i+1] = sep[1];
			i++;
		}
		i++;		
    }
    return (concatenate);
}

int main()
{
    char *strings[] = {"1","2","3","4","5"};
    char separator[1] = {"|"};
    char *hyperfusion;

    hyperfusion = ft_strjoin(3, strings, separator);
    ft_foreachwrite(hyperfusion, ft_putchar);
}