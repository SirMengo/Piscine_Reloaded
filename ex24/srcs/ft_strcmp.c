/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 13:20:56 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/08 18:11:16 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	calc;

	i = 0;
	calc = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		calc = s1[i] - s2[i];
		if (calc > 0 || calc < 0)
			return (calc);
		i++;
	}
	return (0);
}
