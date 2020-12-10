/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:48:11 by ahan              #+#    #+#             */
/*   Updated: 2020/12/05 15:54:16 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		num;
	int		sign;
	char	*ptr;

	num = 0;
	sign = 1;
	ptr = str;
	while (*ptr == ' ' || (*ptr >= 9 && *ptr <= 13))
		ptr++;
	while (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			sign *= -1;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		num *= 10;
		num += (int)(*ptr - '0');
		ptr++;
	}
	return (num * sign);
}
