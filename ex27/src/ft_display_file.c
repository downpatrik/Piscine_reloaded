/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:22:22 by wvenita           #+#    #+#             */
/*   Updated: 2019/04/08 18:47:30 by wvenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		main(int ac, char **av)
{
	int		ft;
	char	buf[1];

	if (ac == 1)
		write(1, "File name missing.\n", 19);
	else if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		ft = open(av[1], O_RDONLY);
		if (ft < 0)
			return (0);
		while (read(ft, buf, 1))
			write(1, &buf, 1);
		close(ft);
	}
	return (0);
}
