/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 23:42:02 by ahan              #+#    #+#             */
/*   Updated: 2020/12/05 11:37:31 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char k)
{
	write(1, &k, 1);
}

void	base_hex(char c)
{
	char	hex1;
	char	hex2;
	int		nega_char;

	ft_putchar('\\');
	if (c < 0)
	{
		nega_char = (-128 - (c)) * -1 + 128;
		hex1 = nega_char / 16;
		hex2 = nega_char % 16;
	}
	else
	{
		hex1 = c / 16;
		hex2 = c % 16;
	}
	if (hex1 < 10)
		ft_putchar(hex1 + '0');
	else
		ft_putchar(hex1 + 87);
	if (hex2 < 10)
		ft_putchar(hex2 + '0');
	else
		ft_putchar(hex2 + 87);
}

void	ft_putstr_non_printable(char *str)
{
	char *trs;

	trs = str;
	while (*trs != 0)
	{
		if (*trs < 32 || *trs == 127)
			base_hex(*trs);
		else
			ft_putchar(*trs);
		trs++;
	}
}
