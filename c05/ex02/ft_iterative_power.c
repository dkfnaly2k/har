/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:32:29 by ahan              #+#    #+#             */
/*   Updated: 2020/12/07 15:52:54 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int p;

	p = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		p *= nb;
		power--;
	}
	return (p);
}