/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 14:37:13 by marvin            #+#    #+#             */
/*   Updated: 2025/09/21 14:37:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Made By Ikosoft | Please Do Not Cpy Past | Read + Understand it.

#include <unistd.h>

int g_count;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_solution(int board[10])
{
	int i;

	for (i = 0; i < 10; i++)
		ft_putchar(board[i] + '0');
	ft_putchar('\n');
}

int	is_safe(int board[10], int row, int col)
{
	int i;

	for (i = 0; i < row; i++)
	{
		if (board[i] == col || (i - row) == (board[i] - col) 
		    || (i - row) == (col - board[i]))
			return (0);
	}
	return (1);
}

void	solve(int board[10], int row)
{
	int col;

	if (row == 10)
	{
		print_solution(board);
		g_count++;
		return;
	}
	for (col = 0; col < 10; col++)
	{
		if (is_safe(board, row, col))
		{
			board[row] = col;
			solve(board, row + 1);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int board[10];

	g_count = 0;
	solve(board, 0);
	return (g_count);
}

/* Test */
#include <stdio.h>
int main(void)
{
	int res = ft_ten_queens_puzzle();
	printf("Total solutions = %d\n", res);
}
