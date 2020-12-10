/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:23:47 by ahan              #+#    #+#             */
/*   Updated: 2020/12/09 19:00:35 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
		dest[i++] = 0;
	return (dest);
}

int main()
{
	char dk[5] = "abvd1";
	char sh[4] = "defg";
	printf("%s\n", ft_strncpy(dk, sh, 4));
	printf("%s\n", dk);
}
