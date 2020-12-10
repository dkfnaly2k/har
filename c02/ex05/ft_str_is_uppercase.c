/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:50:31 by ahan              #+#    #+#             */
/*   Updated: 2020/12/02 15:53:03 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_upcase(char c)
{
	if (!('A' > c || c > 'Z'))
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!is_upcase(str[i++]))
			return (0);
	return (1);
}
