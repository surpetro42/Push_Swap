/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:35:23 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 22:10:32 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_push_swap
{
	int					nbr;
	int					index;
	struct s_push_swap	*prev;
	struct s_push_swap	*next;
}	t_push_swap;

/*----------------------- main -----------------------*/
int			main(int argc, char **argv);
void		ft_loop(char **s, t_push_swap **list_a, t_push_swap **list_b);

/*----------------------- butterfly -----------------------*/
void		butterfly(t_push_swap **stack_a, t_push_swap **stack_b);
void		sort_a(t_push_swap **stack_a, t_push_swap **stack_b);
int			get_position(t_push_swap *stack, int max);
int			offset(int size);
int			max_index(t_push_swap *stack);

/*----------------------- free -----------------------*/
void		ft_free(t_push_swap **stack_a, t_push_swap **stack_b);
void		ft_print_list(t_push_swap *list);

/*----------------------- src -----------------------*/
void		ascending(t_push_swap **stack);
int			ft_atoi(char *str);
void		ft_index(t_push_swap **list);
int			ft_inspect_char(char **s, int i, int j);
int			ft_inspect(char *s, int x, int count, int i);
void		ft_inspect_nbr(int n);
void		ft_list_add(t_push_swap **list, t_push_swap *new);
t_push_swap	*ft_lst_new(int nbr, int index);
int			ft_list_size(t_push_swap *list);
char		*ft_strjoin(char *s1, char *s2);
void		repetation_check(t_push_swap **stack);
char		**ft_split(char const *s, char c);
size_t		ft_strlen(const char *s);
char		*ft_substr(const char *s, size_t start, size_t len);
static int	count_words(char const *s, char x);

/*----------------------- sorting -----------------------*/
void		sorting_three(t_push_swap **stack);
void		sorting_five(t_push_swap **stack_a, t_push_swap **stack_b);

/*----------------------- rules -----------------------*/
static void	swap(t_push_swap *stack);
void		sa(t_push_swap *stack, int x);
void		sb(t_push_swap *stack, int x);
void		ss(t_push_swap **stack_a, t_push_swap **stack_b, int x);
static void	push(t_push_swap **src, t_push_swap **dest);
void		pa(t_push_swap **stack_a, t_push_swap **stack_b, int x);
void		pb(t_push_swap **stack_a, t_push_swap **stack_b, int x);
static void	rotate(t_push_swap **stack);
void		ra(t_push_swap **stack_a, int x);
void		rb(t_push_swap **stack_b, int x);
void		rr(t_push_swap **stack_a, t_push_swap **stack_b, int x);
static void	reverse_rotate(t_push_swap **stack);
void		rra(t_push_swap **stack_a, int x);
void		rrb(t_push_swap **stack_b, int x);
void		rrr(t_push_swap **stack_a, t_push_swap **stack_b, int x);

/*----------------------- cheker -----------------------*/
void		ft_loop_checher(char **s, t_push_swap **list_a,
				t_push_swap **list_b);
void		defining(char *s, t_push_swap **stack_a, t_push_swap **stack_b);
char		**spl_str(char *s);
int			ft_strcmp(const char *s1, const char *s2);
void		ft_gnl_definition(t_push_swap **stack_a, t_push_swap **stack_b);
void		defining_push(char *s, t_push_swap **stack_a,
				t_push_swap **stack_b);
void		defining_rr(char *s, t_push_swap **stack_a,
				t_push_swap **stack_b);
void		defining_r(char *s, t_push_swap **stack_a,
				t_push_swap **stack_b);
void		defining_swap(char *s, t_push_swap **stack_a,
				t_push_swap **stack_b);

#endif
