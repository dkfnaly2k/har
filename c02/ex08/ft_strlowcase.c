/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:59:27 by ahan              #+#    #+#             */
/*   Updated: 2020/12/03 02:09:44 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_low(char c)
{
	if (!('A' > c || c > 'Z'))
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_low(str[i]))
			str[i] = str[i] + 32;
		++i;
	}
	return (str);
}
