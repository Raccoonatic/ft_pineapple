/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:33:49 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/14 10:22:36 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>
# include <limits.h>

# define RSET	"\033[0m" 
# define B_WI	"\033[1;37m"
# define LIME	"\033[38;2;0;255;0m"
# define BLOD	"\033[1;38;2;255;0;0m"
# define NEOR	"\033[3m\033[38;2;255;153;51m"
# define MINT	"\033[38;2;55;250;133;48;2;0;0;0m"

typedef enum e_tropicool
{
	ECUAD,
	CAPRI,
	CACER
}	t_tropicool;

typedef struct s_node
{
	int				num;
	int				stack_index;
	int				move_price;
	t_tropicool		tropic;
	struct s_node	*cheapest;
	struct s_node	*target;
	struct s_node	*next;
	struct s_node	*prev;
	struct s_node	*tail;
}	t_node;

// ps_input_manager.c
t_node	*ps_input_manager(int arc, char *wordy[]);
// ps_init_utils.c
char	*ps_spalloc(size_t size);
size_t	ps_strlen(char *str);
void	fail(void);
// ps_list_gen.c
t_node	*ps_list_gen(char *input);
void	ps_delnode(t_node **head, int go_to_fail);
// ps_algorithm_utils_alpha.c
size_t	ps_count_nodes(t_node *head);
void	ps_set_index(t_node *head);
t_node	*ps_maxinum(t_node *head);
t_node	*ps_mininum(t_node *head);
int		ps_sort_check(t_node *head);
// ps_moves.c
void	ps_swap(t_node **st1, t_node **st2, char ab);
void	ps_push(t_node **st1, t_node **st2, char ab);
void	ps_rotate(t_node **st1, t_node **st2, char ab);
void	ps_revotate(t_node **st1, t_node **st2, char ab);
// ps_tiny_sorts.c
void	ps_sort_two(t_node **stack, char ab);
void	ps_sort_three(t_node **stack, char ab);
void	ps_sort_four(t_node **stack_a, t_node **stack_b);
void	ps_sort_five(t_node **stack_a, t_node **stack_b);
void	ps_refresh_tiny_meta(t_node *stack);
// ps_sort_five_utils.c
t_node	*ps_find_big_baby(t_node *head, int baby);
void	ps_sf_push(t_node **stacka, t_node **stackb, t_node *target);
void	ps_sf_sort_rems(t_node **stacka, t_node **stackb);
// ps_sort_them_all.c
void	one_f_to_sort_them_all(t_node **stacka, t_node **stackb);
// ps_algorithm_utils_beta.c
void	ps_refresh_meta(t_node *heada, t_node *headb);
void	ps_cheap_rotate(t_node **st1, t_node **st2, char ab);
// racc_print.c
int		racc_print(int fd, const char *format, ...);
// racc_print_utils.c
void	racc_putchar(int fd, char c, int *counter);
void	racc_putstr(int fd, char *s, int mode, int *counter);
void	racc_putadrs(int fd, uintptr_t n, int *counter, char *base);
void	racc_putnbs(int fd, unsigned int n, int *counter, char *base);

#endif
