/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:26:13 by ahan              #+#    #+#             */
/*   Updated: 2020/12/05 18:58:34 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		chk(char c)
{
	if (c < '0')
		return (0);
	else if (c > '9' && c < 'A')
		return (0);
	else if ((c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr)
	{
		if (ptr == str)
		{
			if (*ptr <= 'z' && *ptr >= 'a')
				*ptr -= 32;
		}
		else if (chk(*(ptr - 1)) == 0)
		{
			if (*ptr <= 'z' && *ptr >= 'a')
				*ptr -= 32;
		}
		else if ((*ptr >= 'A') && (*ptr <= 'Z'))
		{
			*ptr += 32;
		}
		ptr++;
	}
	return (str);
}

#include <stdio.h>
char    *ft_strcapitalize(char *str);

int main(void)
{
	char mastring[] = "Rekt17+lol mdr mdr 4242l42$";
	printf("%s\n", ft_strcapitalize(mastring));
	return (0);
}
