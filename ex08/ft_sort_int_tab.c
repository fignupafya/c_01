/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 00:03:46 by acigerim          #+#    #+#             */
/*   Updated: 2022/08/31 00:03:47 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	c;

	if (*a > *b)
	{
	c = *a;
	*a = *b;
	*b = c;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;

	while (size > 0)
	{
		index = 0;
		while (index < size - 1)
		{
			swap(&tab[index], &tab[index + 1]);
			index++;
		}
		size--;
	}
}
