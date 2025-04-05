/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 22:52:09 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/05 23:18:10 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int range;
	int i;
	int *arr;
	
	i = 0;
	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	else
		range = max - min;
	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
		return (0);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
