/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:39:57 by ahan              #+#    #+#             */
/*   Updated: 2020/12/07 19:48:04 by ahan             ###   ########.fr       */
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

int		ft_find_next_prime(int nb)
{
	unsigned int	i;
	int				empty;

	i = (unsigned int)nb;
	empty = 1;
	while (empty)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
