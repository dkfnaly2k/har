/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:56:28 by ahan              #+#    #+#             */
/*   Updated: 2020/12/03 02:05:34 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_print(char c)
{
	if (!(32 > c || c > 126))
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!is_print(str[i++]))
			return (0);
	return (1);
}
