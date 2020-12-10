/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahan <ahan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 20:11:14 by ahan              #+#    #+#             */
/*   Updated: 2020/12/07 20:12:25 by ahan             ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	ft_putstr(argv[0]);
	(void)argc;
	return (0);
}
