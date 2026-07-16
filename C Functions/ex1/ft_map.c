/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilaire <shilaire@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 09:41:18 by shilaire          #+#    #+#             */
/*   Updated: 2026/07/15 13:16:22 by shilaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*newtab;

	newtab = malloc(length * sizeof(int));
	while (length > 0)
	{
		newtab[length - 1] = f(tab[length - 1]);
		length--;
	}
	return (newtab);
}
