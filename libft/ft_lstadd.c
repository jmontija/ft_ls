/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontija <jmontija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 17:33:58 by jmontija          #+#    #+#             */
/*   Updated: 2016/02/03 18:39:55 by jmontija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *tmp;

	if (alst != NULL)
	{
		tmp = *alst;
		*alst = new;
		new->next = tmp;
	}
	else
		*alst = new;
}
