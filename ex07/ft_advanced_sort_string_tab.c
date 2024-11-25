/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:49:58 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/25 12:01:29 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	sort_params(int length, char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*tem;

	i = 0;
	while (i < length - 1)
	{
		j = 0;
		while (j < length - i - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
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

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
		i++;
	sort_params(i, tab, cmp);
}

// int ft_strcmp(char *s1, char *s2)
// {
//     while (*s1 && (*s1 == *s2))
//     {
//         s1++; s2++;
//     }
//     return ((unsigned char)*s1 - (unsigned char)*s2);
// }

// int main(void)
// {
//     char *tab[] = {"banana", "apple", "cherry", "date", NULL};
//     int i = 0;

//     // Sort the array using ft_strcmp as the comparison function
//     ft_advanced_sort_string_tab(tab, &ft_strcmp);

//     // Print the sorted array
//     while (tab[i] != NULL)
//     {
//         printf("%s\n", tab[i]);
//         i++;
//     }

//     return (0);
// }