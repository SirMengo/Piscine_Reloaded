/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:55:15 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/08 17:40:09 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_putchar(char c)
{
	write(1, &c, 1);
}