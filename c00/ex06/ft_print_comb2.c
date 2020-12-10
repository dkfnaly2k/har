/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 23:29:21 by ahan              #+#    #+#             */
/*   Updated: 2020/11/26 03:46:29 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	out(char k)
{
	char i;
	char j;

	i = k / 10 + 48;
	j = k % 10 + 48;
	write(1, &i, 1);
	write(1, &j, 1);
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = -1;
	b = 0;
	while (a++ < 97)
	{
		while (b++ < 99)
		{
			out(a);
			write(1, " ", 1);
			out(b);
			write(1, ", ", 2);
		}
		b = a + 1;
	}
	write(1, "98 99", 5);
}