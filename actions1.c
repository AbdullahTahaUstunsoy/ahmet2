/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: austunso <austunso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:38:16 by austunso          #+#    #+#             */
/*   Updated: 2025/02/16 15:38:20 by austunso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **data)
{
	int	tmp;

	if (ft_lstsize(*data) < 2)          //swapı liste ile yap. , atoi > 12 yi ekle
		return ;
	tmp = (*data)->next->number;
	(*data)->next->number = (*data)->number;
	(*data)->number = tmp;
}

void	sa(t_stack **a)
{
	swap((a));
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	swap((b));
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	swap((a));
	swap((b));
	write(1, "ss\n", 3);
}