/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:03 by ahan              #+#    #+#             */
/*   Updated: 2020/12/05 12:18:59 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *ptr;
	char *str;

	ptr = dest;
	str = src;
	while (*ptr)
		ptr++;
	while (*str)
	{
		*ptr = *str;
		str++;
		ptr++;
	}
	*ptr = 0;
	return (dest);
}
