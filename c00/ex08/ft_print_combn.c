/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:36:15 by ahan              #+#    #+#             */
/*   Updated: 2020/12/09 17:00:08 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *aray, int n)
{
	int	i;
	int	aut;

	aut = 1;
	i = 0;
	while (++i < n)
		if (aray[i - 1] >= aray[i])
			aut = 0;
	if (!aut)
		return ;
	i = -1;
	while (++i < n)
		ft_putchar(aray[i] + 48);
	if (aray[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	aray[10];

	if (n > 10 || n < 0)
		return ;
	i = -1;
	while (++i < n)
		aray[i] = i;
	while (aray[0] <= (10 - n) && n >= 1)
	{
		print(aray, n);
		if (n == 10)
			break ;
		aray[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (aray[i] > 9)
			{
				aray[i - 1]++;
				aray[i] = 0;
			}
		}
	}
}

int main()
{
	int i = 4;
	ft_print_combn(i);
}
