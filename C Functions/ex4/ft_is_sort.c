/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilaire <shilaire@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 10:21:36 by shilaire          #+#    #+#             */
/*   Updated: 2026/07/15 11:38:34 by shilaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	var;
	int	diff;

	i = 0;
	while (i > length - 1)
	{
		while (!var)
		{
			var = f(tab[i], tab[i + 1]);
			i++;
		}
		diff = f(tab[i], tab[i + 1]);
		if (diff != 0)
		{
			if (var != diff)
			{
				return (0);
			}
		}
		i++;
		return (1);
	}
}
