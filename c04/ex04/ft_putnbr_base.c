/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 16:25:08 by ahan              #+#    #+#             */
/*   Updated: 2020/12/05 18:29:03 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		chk_error_base(char *base)
{
	char	*chkbase;
	int		i_chk;

	chkbase = base;
	if (*base == 0 || *(base + 1) == 0)
		return (0);
	while (*chkbase)
	{
		if (*chkbase == '+' || *chkbase == '-' || *chkbase <= 32)
			return (0);
		i_chk = 1;
		while (*(chkbase + i_chk))
		{
			if (*(chkbase + i_chk) == *chkbase)
				return (0);
			i_chk++;
		}
		chkbase++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	char	*ptr;
	int		i;

	ptr = str;
	i = 0;
	while (*ptr != 0)
	{
		i++;
		ptr++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int lbase;
	unsigned int nbr_unsign;

	if (chk_error_base(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr_unsign = (unsigned int)(-1 * nbr);
		}
		else
			nbr_unsign = (unsigned int)nbr;
		lbase = ft_strlen(base);
		if (nbr_unsign >= lbase)
		{
			ft_putnbr_base(nbr_unsign / lbase, base);
			ft_putnbr_base(nbr_unsign % lbase, base);
		}
		else
		{
			write(1, base + nbr_unsign, 1);
		}
	}
}
