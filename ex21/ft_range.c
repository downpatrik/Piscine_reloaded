/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:05:20 by wvenita           #+#    #+#             */
/*   Updated: 2019/04/07 12:16:51 by wvenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*num;
	int		k;

	if (min >= max)
		return (NULL);
	num = (int*)malloc(sizeof(int) * (max - min));
	if (num == NULL)
		return (NULL);
	k = 0;
	while (min < max)
		num[k++] = min++;
	return (num);
}
