/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 17:30:29 by seli              #+#    #+#             */
/*   Updated: 2018/09/20 17:58:18 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int *end;
	int *inner_head;
	int *next_int;
	int temp;

	end = tab + size - 1;
	while (tab < end)
	{
		inner_head = tab;
		while (inner_head < end)
		{
			next_int = inner_head + 1;
			if (*inner_head > *next_int)
			{
				temp = *inner_head;
				*inner_head = *next_int;
				*next_int = temp;
			}
			inner_head++;
		}
		end--;
	}
}
