/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choejiwon <choejiwon@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:20:20 by choejiwon         #+#    #+#             */
/*   Updated: 2022/07/14 23:33:13 by choejiwon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);
void	setArray(int list[], int n);
void	add(int list[], int n, int i);
void	ft_print(int list[], int n);

void	ft_print(int list[], int n) //화면에 출력하는 과정 
{
	int		i;
	char	a;

	i = 0;
	while (i < n)
	{
		a = list[i] + '0';
		write(1, &a, 1);
		i++;
	}
	if (list[0] == 10 - n)
		write(1, "", 1);
	else
		write(1, ", ", 2);
}

void	setArray(int list[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		list[i] = i;
		i++;
	}
	while (i < 9)
	{
		list[i] = -1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	list[9]; //몇번째 자리에 무슨 숫자가 들어있냐 

	//처음 초기화
	setArray(list, n);
	while (list[0] <= 10 - n)
	{
		ft_print(list, n); //화면에 출력 
		if (list[0] == 10 - n)
			break ;
		if (list[n - 1] == 9)
		{
			add(list, n - 1, n);
		}
		else
		{
			list[n - 1]++;
		}
	}
}

void	add(int list[], int i, int n)
{
	list[i] = list[i - 1] + 2;
	list[i - 1]++;
	if (list[i] > 10 - n + i)
	{
		add(list, i - 1, n);
		list[i] = list[i - 1] + 1;
	}
}

int	main(void)
{
	ft_print_combn(3);
}
