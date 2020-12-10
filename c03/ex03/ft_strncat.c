/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:20:16 by ahan              #+#    #+#             */
/*   Updated: 2020/12/05 12:25:20 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*trdest;
	char			*trsrc;
	unsigned int	i;

	i = 0;
	trdest = dest;
	trsrc = src;
	while (*trdest)
		trdest++;
	while (i < nb && *trsrc)
	{
		*trdest = *trsrc;
		trsrc++;
		trdest++;
		i++;
	}
	*trdest = 0;
	return (dest);
}
