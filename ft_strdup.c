/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysan-seb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:23:05 by ysan-seb          #+#    #+#             */
/*   Updated: 2016/11/08 15:41:31 by ysan-seb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (tmp == NULL)
		return (NULL);
	if (tmp != NULL)
	{
		while (s1[i] != '\0')
		{
			tmp[i] = s1[i];
			i++;
		}
	}
	tmp[i] = '\0';
	return (tmp);
}
