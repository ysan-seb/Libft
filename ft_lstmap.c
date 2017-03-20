/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysan-seb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 13:59:26 by ysan-seb          #+#    #+#             */
/*   Updated: 2016/11/20 15:12:16 by ysan-seb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *ret;

	if (lst != NULL)
	{
		ret = (t_list*)malloc(sizeof(f(lst)));
		if (ret == NULL)
			return (NULL);
		ret = f(lst);
		ret->next = ft_lstmap(lst->next, f);
		return (ret);
	}
	return (NULL);
}
