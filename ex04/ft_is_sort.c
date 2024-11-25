/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 21:03:34 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/25 10:30:18 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int function(int a, int b)
// {
// 	return (a - b);
// }

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	incrementing;
	int	decrementing;

	if (length <= 1)
		return (1);
	i = -1;
	incrementing = 1;
	decrementing = 1;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			incrementing = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			decrementing = 0;
	}
	return (decrementing || incrementing);
}

// int main()
// {
// 	int arr[5] = {4,34,654,700,24681};
// 	printf("%d\n", ft_is_sort(arr, 5, &function));
// 	// printf("%d\n", function(0,-1));
// }
