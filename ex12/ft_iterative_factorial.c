/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:39:45 by wvenita           #+#    #+#             */
/*   Updated: 2019/04/05 18:43:48 by wvenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;

	i = 1;
	if (nb == 0)
		return (1);
	if (nb > 12 || nb < 0)
		return (0);
	while (nb != 0)
	{
		i *= nb;
		if (nb > 0)
			nb--;
	}
	return (i);
}
