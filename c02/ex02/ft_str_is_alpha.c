/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:04:46 by ahan              #+#    #+#             */
/*   Updated: 2020/12/02 15:35:04 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if (!('a' > c || c > 'z'))
		return (1);
	if (!('A' > c || c > 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!is_alpha(str[i++]))
			return (0);
	return (1);
}
