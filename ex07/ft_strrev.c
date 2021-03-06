/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:46:32 by seli              #+#    #+#             */
/*   Updated: 2018/09/20 17:06:47 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		len;
	int		temp;
	char	*head;
	char	*dummyhead;

	len = 0;
	head = str;
	dummyhead = str;
	while (*str)
	{
		len++;
		str++;
	}
	str--;
	while (head < str)
	{
		temp = *head;
		*head = *str;
		*str = temp;
		head++;
		str--;
	}
	str = dummyhead;
	return (str);
}
