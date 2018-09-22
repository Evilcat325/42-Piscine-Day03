/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 17:07:42 by seli              #+#    #+#             */
/*   Updated: 2018/09/20 17:29:15 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	long result;
	int negative;

	negative = 0;
	if (*str == '-')
	{
		negative = 1;
		str++;
	}
	if (*str == '+')
		str++;
	result = 0;
	while (*str)
	{
		if (negative)
			result = result * 10 - (*str - '0');
		else
			result = result * 10 + (*str - '0');
		str++;
	}
	return ((int) result);
}
