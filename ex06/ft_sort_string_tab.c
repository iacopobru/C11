/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:46:02 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/25 12:01:34 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	sort_params(int length, char **tab)
{
	int		i;
	int		j;
	char	*tem;
	int		c;

	i = 0;
	while (i < length - 1)
	{
		j = 0;
		while (j < length - i - 1)
		{
			c = 0;
			while (tab[j][c] == tab[j + 1][c] && tab[j][c] && tab[j + 1][c])
				c++;
			if (tab[j][c] > tab[j + 1][c])
			{
				tem = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tem;
			}
			j++;
		}
		i++;
	}
}

void	ft_sort_string_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
		i++;
	sort_params(i, tab);
}

// int main(void)
// {
//     char *tab[] = {"banana", "apple", "cherry", "date", NULL};
//     int i = 0;

//     // Sort the array using ft_strcmp as the comparison function
//     ft_sort_string_tab(tab);

//     // Print the sorted array
//     while (tab[i] != NULL)
//     {
//         printf("%s\n", tab[i]);
//         i++;
//     }

//     return (0);
// }