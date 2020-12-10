/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:56:59 by ahan              #+#    #+#             */
/*   Updated: 2020/11/30 15:57:55 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (*(tab + j) < *(tab + i))
			{
				tmp = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = tmp;
			}
			j++;
		}
		i++;
	}
}
