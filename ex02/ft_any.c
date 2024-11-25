/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:49:00 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/24 19:55:46 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char *))
{
	if (tab == NULL)
		return (0);
	while (*tab != NULL)
	{
		if (f(*tab))
			return (1);
		tab++;
	}
	return (0);
}
