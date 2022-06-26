/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:53:00 by atouati           #+#    #+#             */
/*   Updated: 2022/06/26 16:45:22 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	check_and_file(int ac, char **av, char **str, t_stk **stack_a)
{
	if (ac < 2)
	{
		write(1, "Error\n", 6);
		exit (0);
	}
	str = check_arg_and_add(av, ac);
	if (str == NULL)
		exit (0);
	else
		check_if_num(str);
	check_dup(str);
	*stack_a = fill_stack(*stack_a, str);
	if (check_sort(*stack_a) == 0)
		exit (0);
}

void	do_next_instruction(char *str, t_stk **stack_a, t_stk **stack_b)
{
	if (ft_strcmp(str, "rrb\n") == 0)
		rrb(stack_b);
	else if (ft_strcmp(str, "rrr\n") == 0)
		rrr(stack_a, stack_b);
	else if (ft_strcmp(str, "ss\n") == 0)
		ss(stack_a, stack_b);
	else if (ft_strcmp(str, "pb\n") == 0)
		p(stack_a, stack_b);
	else if (ft_strcmp(str, "pa\n") == 0)
		p(stack_b, stack_a);
	else
	{
		write (1, "Error\n", 6);
		exit(0);
	}
}

void	do_instruction(char	*str, t_stk **stack_a, t_stk **stack_b)
{
	if (ft_strcmp(str, "sa\n") == 0)
		sa(stack_a);
	else if (ft_strcmp(str, "sb\n") == 0)
		sb(stack_b);
	else if (ft_strcmp(str, "ra\n") == 0)
		ra(*stack_a);
	else if (ft_strcmp(str, "rb\n") == 0)
		rb(*stack_b);
	else if (ft_strcmp(str, "rr\n") == 0)
		rr(*stack_a, *stack_b);
	else if (ft_strcmp(str, "rra\n") == 0)
		rra(stack_a);
	else
		do_next_instruction(str, stack_a, stack_b);
}

int	main(int ac, char **av)
{
	char	**str;
	t_stk	*stack_a;
	t_stk	*stack_b;
	char	*instruction;

	stack_a = NULL;
	stack_b = NULL;
	check_and_file(ac, av, str, &stack_a);
	instruction = get_next_line(0);
	while (instruction)
	{
		do_instruction(instruction, &stack_a, &stack_b);
		free(instruction);
		instruction = get_next_line(0);
	}
	free(instruction);
	if (check_sort(stack_a) == 0 && stack_b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}
