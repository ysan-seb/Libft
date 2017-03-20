/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysan-seb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 09:00:04 by ysan-seb          #+#    #+#             */
/*   Updated: 2016/11/18 10:10:12 by ysan-seb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itoaisneg(char *s, int *n)
{
	*n *= -1;
	s[0] = '-';
}

char		*ft_itoa(int n)
{
	int		i;
	int		tmp;
	char	*str;

	i = 1;
	tmp = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	while (tmp /= 10)
		++i;
	if (n < 0)
		i++;
	if ((str = (char *)malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	if (n < 0)
		ft_itoaisneg(str, &n);
	str[i] = '\0';
	while (i-- && n)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
