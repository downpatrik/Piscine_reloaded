/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:15:53 by wvenita           #+#    #+#             */
/*   Updated: 2019/04/05 18:42:12 by wvenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			k++;
		i++;
	}
	return (k);
}
