/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosadchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:52:35 by kosadchu          #+#    #+#             */
/*   Updated: 2018/11/20 20:14:05 by kosadchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lenint(int n)
{
	int		len;

	len = 0;
	if (n < 0)
	{
		len = 1;
		n = n * -1;
	}
	if ((n / 10) == 0)
		return (len + 1);
	else
	{
		while (n > 0)
		{
			n /= 10;
			len++;
		}
		return (len);
	}
}
