/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:19:38 by gfattori          #+#    #+#             */
/*   Updated: 2026/07/23 13:19:42 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void	ft_foreachwrite(char *src, int length, void (*f)(char))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(src[i]);
		i++;
	}
}

char *ft_strdup(char *src)
{
    char *new_temp;
    int i;
    int lenght;

    i = 0;
    lenght = sizeof(*src) / sizeof(char);
    new_temp = malloc(lenght *sizeof(char));
    while (src[i])
    {
        new_temp[i] = src[i];
        i++;
    }
    new_temp[i+1] = '\0';
    return (new_temp);
}

int main (void)
{
    char string[] = {"This is a copy"};
    write(1, "Copy ", 6);
    ft_foreachwrite(ft_strdup(string), 15, ft_putchar);
    return (0);    
}

/*
int main(void)
{
   char *string = "this is a copy";
   char *newstr;
   /* Make newstr point to a duplicate of string                              
   if ((newstr = strdup(string)) != NULL)
      printf("The new string is: %s\n", newstr);
   return 0;
}
*/