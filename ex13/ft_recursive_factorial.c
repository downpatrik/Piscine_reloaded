/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:40:57 by wvenita           #+#    #+#             */
/*   Updated: 2019/04/05 18:44:52 by wvenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int		i;
	int		g;

	if (nb == 0)
		return (1);
	if (nb > 0 && nb < 13)
	{
		g = nb;
		i = g * ft_recursive_factorial(--nb);
		return (i);
	}
	else
		return (0);
}
