/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:15:34 by ahan              #+#    #+#             */
/*   Updated: 2020/12/07 19:35:51 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (ft_prime(n, i + 1));
}

int		ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	return (ft_prime((unsigned int)nb, 2));
}
