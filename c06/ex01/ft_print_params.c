/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 20:14:09 by ahan              #+#    #+#             */
/*   Updated: 2020/12/07 20:15:09 by ahan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != 0)
	{
		write(1, ptr, 1);
		ptr++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
