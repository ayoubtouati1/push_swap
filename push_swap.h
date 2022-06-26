/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:25:22 by atouati           #+#    #+#             */
/*   Updated: 2022/06/23 23:59:47 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"
# include "get_next_line/get_next_line.h"

typedef struct s_stk
{
	int				num;
	int				index;
	struct s_stk	*nxt;
}	t_stk;

typedef struct s_struct
{
	t_stk	*a;
	t_stk	*b;
	char	**str;
	int		len;
	int		size;
	int		range_to_pushed;
	int		min;
	int		max;
	int		med;
	int		i;
}	t_struct;

void				push_swap(int ac, char **av);
void				ra_operation(t_stk *node);
void				rb_operation(t_stk *node);
void				rra_operation(t_stk **node);
void				rrb_operation(t_stk **node);
void				sa_operation(t_stk **node);
void				check_dup(char **str);
void				check_if_num(char **str);
int					check_len(char **str);
char				**check_arg_and_add(char **av, int ac);
int					check_sort(t_stk *ptr);
void				short_sort(t_struct *stack,
						t_stk **stack_a, t_stk **stack_b);
void				sort_3(t_stk **stack, int min);
void				sort_4(t_stk **stack_a, t_stk **stack_b, int min);
void				sort_5(t_stk **stack_a, t_stk **stack_b, int min);
void				pa_opearation(t_stk **stack_1, t_stk **stack_2);
void				pb_opearation(t_stk **stack_1, t_stk **stack_2);
int					get_min(t_stk *a);
int					len_of_stack(t_stk *a);
void				big_sort(t_stk **stack_a, t_stk **stack_b);
int					get_min_index(t_stk	*stack);
void				sorter2(t_stk **stack_a, t_stk **stack_b);
void				rrr_operation(t_stk **stack_a, t_stk **stack_b);
void				rr_operation(t_stk	*stack_a, t_stk *stack_b);
void				sb_operation(t_stk **node);
void				ss_operation(t_stk **stack_a, t_stk **stack_b);
t_stk				*fill_stack(t_stk *stack_a, char **str);
void				sa(t_stk **node);
void				sb(t_stk **node);
void				ss(t_stk **stack_a, t_stk **stack_b);
void				ra(t_stk *node);
void				rb(t_stk *node);
void				rr(t_stk	*stack_a, t_stk *stack_b);
void				rra(t_stk **node);
void				rrb(t_stk **node);
void				rrr(t_stk **stack_a, t_stk **stack_b);
void				p(t_stk **stack_1, t_stk **stack_2);
int					*add_tab(int *tab, char **str);
void				sort_tab(int *tab, t_stk *stack_a);
int					check_overflow(char *arg);
unsigned long long	ps_atoi(char *s);
int					ft_strcmp(const char *s1, const char *s2);

#endif