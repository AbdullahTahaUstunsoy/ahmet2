/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: austunso <austunso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:39:29 by austunso          #+#    #+#             */
/*   Updated: 2025/02/16 18:51:52 by austunso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void free_args(char **args){ //splitten dönen değeri free'liyoruz.  stack'i free'lemek için ayrı bir fonksiyon yapacağız.
    int i;

    i = 0;
    while (args[i] != NULL){
        free(args[i]);
        i++;
    }
    free(args);
}

void	free_stack(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*current1;
	t_stack	*temp1;
	t_stack	*current2;
	t_stack	*temp2;

	current1 = *stack_a;
	while (current1 != NULL)
	{
		temp1 = current1 -> next;
		free(current1);
		*stack_a = NULL;
		current1 = temp1;
	}
	free(stack_a);
	stack_a = NULL;
	current2 = *stack_b;
	while (current2 != NULL)
	{
		temp2 = current2 -> next;
		free(current2);
		*stack_b = NULL;
		current2 = temp2;
	}
	free(stack_b);
	stack_b = NULL;
}



int is_in_range(long number){  //atoi (atol yaptık) den long değer dönüyor , integer'ın sınırlarını aşaması durumunda kontrol içn yaptık.

    if (number < -2147483648 || number > 2147483647)    
            return (1);
    return (0);
    
    /*if (ft_strlen(args[i]) > 13) gerekli mi ?
			print_error(ac, args);*/
}

void ft_control3(int is_num_flag , int is_exist_flag, char **args){
    int is_in_range_flag;
    int number;
    int i;

    is_in_range_flag = 0;
    number = 0;
    i = 0;
    while(args[i] != NULL){
        if (is_in_range(ft_atoi(args[i])) == 1) //verilen argümanlar arasında integer sınırlarını aşan sayı var demek.
                is_in_range_flag = 1;           //hiçbir argüman sınırları aşmıyorsa hiçbir zaman flag 1 olmaz.
        i++;            
    }
    free_args(args);
                 
    if (is_num_flag == 1 || is_exist_flag == 1 || is_in_range_flag == 1 )
        print_error(); //burada error basıyor //free lazım mı ?
}