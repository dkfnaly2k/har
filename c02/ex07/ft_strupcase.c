/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:06:55 by ahan              #+#    #+#             */
/*   Updated: 2020/12/02 16:57:59 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		chk_alpha(char c)
{
	if (!('a' > c || c > 'z'))
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (chk_alpha(str[i]))
			str[i] = str[i] - 32;
		++i;
	}
	return (str);
}
