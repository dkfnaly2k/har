/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:42:07 by ahan              #+#    #+#             */
/*   Updated: 2020/12/02 15:49:27 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lowcase(char c)
{
	if (!('a' > c || c > 'z'))
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!is_lowcase(str[i++]))
			return (0);
	return (1);
}
