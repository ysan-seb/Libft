/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysan-seb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:32:32 by ysan-seb          #+#    #+#             */
/*   Updated: 2016/11/19 14:46:20 by ysan-seb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		len;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (tmp != '\0')
	{
		while (*s1 != '\0')
			tmp[i++] = *s1++;
		while (*s2 != '\0')
			tmp[i++] = *s2++;
		tmp[i] = '\0';
		return (tmp);
	}
	return (NULL);
}
