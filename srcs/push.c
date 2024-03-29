/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:25:47 by psaulnie          #+#    #+#             */
/*   Updated: 2022/02/14 14:34:38 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	pa(t_list **stacka, t_list **stackb)
{
	t_list	*tmp;

	ft_lstadd_front(stacka, ft_lstnew_index((*stackb)->content,
			(*stackb)->index));
	tmp = *stackb;
	*stackb = (*stackb)->next;
	free(tmp);
	ft_putendl_fd("pa", 1);
}

void	pb(t_list **stacka, t_list **stackb)
{
	t_list	*tmp;

	ft_lstadd_front(stackb, ft_lstnew_index((*stacka)->content,
			(*stacka)->index));
	tmp = *stacka;
	*stacka = (*stacka)->next;
	free(tmp);
	ft_putendl_fd("pb", 1);
}
