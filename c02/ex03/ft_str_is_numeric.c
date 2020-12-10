/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:31:23 by ahan              #+#    #+#             */
/*   Updated: 2020/12/02 15:49:15 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_numeric(char c)
{
	if (!('0' > c || c > '9'))
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!is_numeric(str[i++]))
			return (0);
	return (1);
}
