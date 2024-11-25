/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:44:52 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/24 19:48:36 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*dest;
	int	i;

	i = 0;
	dest = (int *)malloc(sizeof(int) * length);
	if (!dest)
		return (NULL);
	while (i < length)
		dest[i] = f(tab[i++]);
	return (dest);
}
