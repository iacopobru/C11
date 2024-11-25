/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:41:15 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/25 12:03:43 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		sum(int a, int b);
int		divi(int a, int b);
int		mod(int a, int b);
int		mult(int a, int b);
int		diff(int a, int b);
void	ft_putstr(char *str);
int		ft_strcmp(char *str1, char *str2);
int		ft_atoi(char *nbr);
void	ft_put_number(int a);

void	perform_op(int a, int b, int (*f)(int, int))
{
	ft_put_number(f(a, b));
}

void	chose_op(char **argv, int (**arr)(int, int))
{
	if (ft_strcmp(argv[2], "+") == 0)
		perform_op(ft_atoi(argv[1]), ft_atoi(argv[3]), arr[0]);
	else if (ft_strcmp(argv[2], "-") == 0)
		perform_op(ft_atoi(argv[1]), ft_atoi(argv[3]), arr[1]);
	else if (ft_strcmp(argv[2], "%") == 0)
	{
		if (ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : modulo by zero\n");
		else
			perform_op(ft_atoi(argv[1]), ft_atoi(argv[3]), arr[2]);
	}
	else if (ft_strcmp(argv[2], "/") == 0)
	{
		if (ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : division by zero\n");
		else
			perform_op(ft_atoi(argv[1]), ft_atoi(argv[3]), arr[3]);
	}
	else if (ft_strcmp(argv[2], "*") == 0)
		perform_op(ft_atoi(argv[1]), ft_atoi(argv[3]), arr[4]);
	else
		write(1, "0\n", 2);
}

int	main(int argc, char **argv)
{
	int	(*arr[5])(int, int);

	if (argc < 4)
		return (0);
	arr[0] = &sum;
	arr[1] = &diff;
	arr[2] = &mod;
	arr[3] = &divi;
	arr[4] = &mult;
	chose_op(argv, arr);
}
