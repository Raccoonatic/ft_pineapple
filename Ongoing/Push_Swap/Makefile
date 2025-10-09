# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/09 20:20:13 by lde-san-          #+#    #+#              #
#    Updated: 2025/10/09 01:07:26 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIB = libpushswap.a

MINT	= \033[38;2;55;250;133;48;2;0;0;0m
NEOR	= \033[3m\033[38;2;255;153;51m
B_WI    = \033[1;37m
RESET	= \033[0m
BABY	= \033[38;2;0;255;247m
BLACK	= \033[38;2;0;0;0m

COMPILE = cc -Wall -Werror -Wextra -I.

FILE = ps_algorithm_utils_alpha.c
FILE += ps_algorithm_utils_beta.c
FILE += ps_init_utils.c
FILE += ps_input_manager.c
FILE += ps_list_gen.c
FILE += ps_moves.c
FILE += ps_sort_five_utils.c
FILE += ps_sort_them_all.c
FILE += ps_tiny_sorts.c
FILE += racc_print.c
FILE += racc_print_utils.c

SRC_DIR = src/
OBJ_DIR = obj/

SRC = $(addprefix $(SRC_DIR),$(FILE))
OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

.PRECIOUS: $(SRC)

all: $(NAME)

$(NAME): $(LIB) pushswap.h
	$(COMPILE) $(NAME).c $(LIB) -o $(NAME)

$(LIB): $(OBJ) 
	ar -rcs $(LIB) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	@printf "$(NEOR)"
	$(COMPILE) -c $< -o $@
	@printf "$(RESET)\n"

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(SRC_DIR)%.c: $(SRC_DIR)
	@printf "$(MINT)"
	mv $(@:$(SRC_DIR)%=%) $(SRC_DIR)
	@printf "$(RESET)"

$(SRC_DIR):
	mkdir -p $(SRC_DIR)
	cp pushswap.h $(SRC_DIR)

./$(FILE):
	@printf "$(NEOR)"
	mv -f $(SRC_DIR)$(@:./%=%) .
	@printf "$(RESET)\n"

clean: ./$(FILE)
	@printf "$(BABY)"
	rm -rf $(OBJ_DIR)
	rm -rf $(SRC_DIR)
	rm -rf $(LIB)
	@printf "$(RESET)"

fclean: clean
	@printf "$(B_WI)"
	rm -f $(NAME)
	@printf "$(RESET)"

re: fclean all

restore:
	git restore ps_input_manager.c
	git restore ps_algorithm_utils_alpha.c
	git restore ps_init_utils.c
	git restore ps_algorithm_utils_beta.c
	git restore ps_list_gen.c
	git restore ps_moves.c
	git restore ps_sort_five_utils.c
	git restore ps_sort_them_all.c
	git restore ps_tiny_sorts.c
	git restore racc_print.c
	git restore racc_print_utils.c
	git restore pushswap.h
	git restore push_swap.c

makeboring: fclean build_boring_moves build_boring_errors
	mv Makefile makedel
	$(MAKE) make_boring
	rm -f makedel

build_boring_errors:
	@printf "$(NEOR) Building ps_init_utils.c... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> ps_init_utils.c
	printf "%s\n" '/* ************************************************************************** */'>> ps_init_utils.c
	printf "%s\n" '/*                                                                            */'>> ps_init_utils.c
	printf "%s\n" '/*                                                        :::      ::::::::   */'>> ps_init_utils.c
	printf "%s\n" '/*   ps_init_utils.c                                    :+:      :+:    :+:   */'>> ps_init_utils.c
	printf "%s\n" '/*                                                    +:+ +:+         +:+     */'>> ps_init_utils.c
	printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */'>> ps_init_utils.c
	printf "%s\n" '/*                                                +#+#+#+#+#+   +#+           */'>> ps_init_utils.c
	printf "%s\n" '/*   Created: 2025/09/18 18:30:04 by lde-san-          #+#    #+#             */'>> ps_init_utils.c
	printf "%s\n" '/*   Updated: 2025/10/09 00:53:47 by lde-san-         ###   ########.fr       */'>> ps_init_utils.c
	printf "%s\n" '/*                                                                            */'>> ps_init_utils.c
	printf "%s\n" '/* ************************************************************************** */'>> ps_init_utils.c
	@printf "%s\n" ''>> ps_init_utils.c
	@printf "%s\n" '#include '\"'pushswap.h'\"''>> ps_init_utils.c
	@printf "%s\n" ''>> ps_init_utils.c
	@printf "%s\n" 'char	*ps_spalloc(size_t size)'>> ps_init_utils.c
	@printf "%s\n" '{'>> ps_init_utils.c
	@printf "%s\n" '	char	*allocated;'>> ps_init_utils.c
	@printf "%s\n" '	size_t	guide;'>> ps_init_utils.c
	@printf "%s\n" ''>> ps_init_utils.c
	@printf "%s\n" '	guide = 0;'>> ps_init_utils.c
	@printf "%s\n" '	if (size == 0)'>> ps_init_utils.c
	@printf "%s\n" '		return (NULL);'>> ps_init_utils.c
	@printf "%s\n" '	allocated = malloc((size * sizeof(char)) + 1);'>> ps_init_utils.c
	@printf "%s\n" '	if (!allocated)'>> ps_init_utils.c
	@printf "%s\n" '		return (NULL);'>> ps_init_utils.c
	@printf "%s\n" '	while (guide < size)'>> ps_init_utils.c
	@printf "%s\n" '	{'>> ps_init_utils.c
	@printf "%s\n" '		allocated[guide] = '\'' '\'';'>> ps_init_utils.c
	@printf "%s\n" '		guide++;'>> ps_init_utils.c
	@printf "%s\n" '	}'>> ps_init_utils.c
	@printf "%s\n" '	allocated[guide] = '\'''\\''0'\'';'>> ps_init_utils.c
	@printf "%s\n" '	return (allocated);'>> ps_init_utils.c
	@printf "%s\n" '}'>> ps_init_utils.c
	@printf "%s\n" '/*It allocates a number of '\"'size'\"' spaces of '\"'char'\"' size in memory. Then it '>> ps_init_utils.c
	@printf "%s\n" 'initializes the memory area by filling it with spaces.*/'>> ps_init_utils.c
	@printf "%s\n" ''>> ps_init_utils.c
	@printf "%s\n" 'size_t	ps_strlen(char *str)'>> ps_init_utils.c
	@printf "%s\n" '{'>> ps_init_utils.c
	@printf "%s\n" '	size_t	counter;'>> ps_init_utils.c
	@printf "%s\n" ''>> ps_init_utils.c
	@printf "%s\n" '	counter = 0;'>> ps_init_utils.c
	@printf "%s\n" '	while (str[counter])'>> ps_init_utils.c
	@printf "%s\n" '		counter++;'>> ps_init_utils.c
	@printf "%s\n" '	return (counter);'>> ps_init_utils.c
	@printf "%s\n" '}'>> ps_init_utils.c
	@printf "%s\n" '/*Calculates the length of a '\"'Valid'\"' C string. Excluding the '\\''0 at the end*/'>> ps_init_utils.c
	@printf "%s\n" ''>> ps_init_utils.c
	@printf "%s\n" 'void	fail(void)'>> ps_init_utils.c
	@printf "%s\n" '{'>> ps_init_utils.c
	@printf "%s\n" '	racc_print(2, '\"'Error'\\''n'\"');'>> ps_init_utils.c
	@printf "%s\n" '	exit(1);'>> ps_init_utils.c
	@printf "%s\n" '}'>> ps_init_utils.c
	@printf "%s\n" '/*Prints Error'\\''n to the stderror, and then exits with the EXIT_FAILURE signal*/'>> ps_init_utils.c
	@open ps_init_utils.c
	@printf "$(RESET)🦝"

build_boring_moves:
	@printf "$(NEOR) Building ps_moves.c... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@> ps_moves.c
	printf "%s\n" '/* ************************************************************************** */'>> ps_moves.c
	printf "%s\n" '/*                                                                            */'>> ps_moves.c
	printf "%s\n" '/*                                                        :::      ::::::::   */'>> ps_moves.c
	printf "%s\n" '/*   ps_moves.c                                         :+:      :+:    :+:   */'>> ps_moves.c
	printf "%s\n" '/*                                                    +:+ +:+         +:+     */'>> ps_moves.c
	printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */'>> ps_moves.c
	printf "%s\n" '/*                                                +#+#+#+#+#+   +#+           */'>> ps_moves.c
	printf "%s\n" '/*   Created: 2025/09/21 15:34:26 by lde-san-          #+#    #+#             */'>> ps_moves.c
	printf "%s\n" '/*   Updated: 2025/10/09 01:04:21 by lde-san-         ###   ########.fr       */'>> ps_moves.c
	printf "%s\n" '/*                                                                            */'>> ps_moves.c
	printf "%s\n" '/* ************************************************************************** */'>> ps_moves.c
	@printf "%s\n" ''>> ps_moves.c
	@printf "%s\n" '#include '\"'pushswap.h'\"''>> ps_moves.c
	@printf "%s\n" ''>> ps_moves.c
	@printf "%s\n" 'void	ps_swap(t_node **st1, t_node **st2, char ab)'>> ps_moves.c
	@printf "%s\n" '{'>> ps_moves.c
	@printf "%s\n" '	if ((!*st1 || !(*st1)-> next) || (st2 && (!*st2 || !(*st2)->next)))'>> ps_moves.c
	@printf "%s\n" '		return ;'>> ps_moves.c
	@printf "%s\n" '	(*st1)-> prev = (*st1)-> next;'>> ps_moves.c
	@printf "%s\n" '	(*st1)-> next = (*st1)-> next -> next;'>> ps_moves.c
	@printf "%s\n" '	(*st1)-> prev -> next = *st1;'>> ps_moves.c
	@printf "%s\n" '	(*st1)-> prev -> prev = NULL;'>> ps_moves.c
	@printf "%s\n" '	if ((*st1)-> next)'>> ps_moves.c
	@printf "%s\n" '		(*st1)-> next -> prev = *st1;'>> ps_moves.c
	@printf "%s\n" '	*st1 = (*st1)-> prev;'>> ps_moves.c
	@printf "%s\n" '	if (!st2)'>> ps_moves.c
	@printf "%s\n" '	{'>> ps_moves.c
	@printf "%s\n" '		racc_print(1, '\"'s'\%'c'\\.'n'\"', ab);'>> ps_moves.c
	@printf "%s\n" '		return ;'>> ps_moves.c
	@printf "%s\n" '	}'>> ps_moves.c
	@printf "%s\n" '	(*st2)-> prev = (*st2)-> next;'>> ps_moves.c
	@printf "%s\n" '	(*st2)-> next = (*st2)-> next -> next;'>> ps_moves.c
	@printf "%s\n" '	(*st2)-> prev -> next = *st2;'>> ps_moves.c
	@printf "%s\n" '	(*st2)-> prev -> prev = NULL;'>> ps_moves.c
	@printf "%s\n" '	if ((*st2)-> next)'>> ps_moves.c
	@printf "%s\n" '		(*st2)-> next -> prev = *st2;'>> ps_moves.c
	@printf "%s\n" '	*st2 = (*st2)-> prev;'>> ps_moves.c
	@printf "%s\n" '	racc_print(1, '\"'ss'\\''n'\"');'>> ps_moves.c
	@printf "%s\n" '	return ;'>> ps_moves.c
	@printf "%s\n" '}'>> ps_moves.c
	@printf "%s\n" '/*Can execute sa or sb depending on which stack is passed on st1. The ab'>> ps_moves.c
	@printf "%s\n" 'parameter serves to then print the corresponding character ('\''a'\'' or '\''b'\'').'>> ps_moves.c
	@printf "%s\n" 'If both arguments are used, in other words, if st2 is not NULL, then the'>> ps_moves.c
	@printf "%s\n" 'function expects having been served both stacks, in which case it will do'>> ps_moves.c
	@printf "%s\n" 'the swap on both and print ss accordingly*/'>> ps_moves.c
	@printf "%s\n" ''>> ps_moves.c
	@printf "%s\n" 'void	ps_push(t_node **st1, t_node **st2, char ab)'>> ps_moves.c
	@printf "%s\n" '{'>> ps_moves.c
	@printf "%s\n" '	t_node	*temp;'>> ps_moves.c
	@printf "%s\n" ''>> ps_moves.c
	@printf "%s\n" '	if (!(*st1))'>> ps_moves.c
	@printf "%s\n" '		return ;'>> ps_moves.c
	@printf "%s\n" '	temp = (*st1)-> next;'>> ps_moves.c
	@printf "%s\n" '	(*st1)-> next = *st2;'>> ps_moves.c
	@printf "%s\n" '	if (*st2)'>> ps_moves.c
	@printf "%s\n" '		(*st1)-> next -> prev = *st1;'>> ps_moves.c
	@printf "%s\n" '	if (temp)'>> ps_moves.c
	@printf "%s\n" '		temp -> prev = NULL;'>> ps_moves.c
	@printf "%s\n" '	*st2 = *st1;'>> ps_moves.c
	@printf "%s\n" '	*st1 = temp;'>> ps_moves.c
	@printf "%s\n" '	racc_print(1, '\"'p'\%'c'\\''n'\"', ab);'>> ps_moves.c
	@printf "%s\n" '	return ;'>> ps_moves.c
	@printf "%s\n" '}'>> ps_moves.c
	@printf "%s\n" '/*Can execute pa or pb depending on which stack is passed on st1. It pushes'>> ps_moves.c
	@printf "%s\n" 'the first node from st1 on top of st2. The ab parameter serves to then print'>> ps_moves.c
	@printf "%s\n" 'the corresponding character ('\''a'\'' or '\''b'\'').*/'>> ps_moves.c
	@printf "%s\n" ''>> ps_moves.c
	@printf "%s\n" 'static t_node	*ps_findend(t_node *st1)'>> ps_moves.c
	@printf "%s\n" '{'>> ps_moves.c
	@printf "%s\n" '	while (st1 -> next)'>> ps_moves.c
	@printf "%s\n" '		st1 = st1 -> next;'>> ps_moves.c
	@printf "%s\n" '	return (st1);'>> ps_moves.c
	@printf "%s\n" '}'>> ps_moves.c
	@printf "%s\n" ''>> ps_moves.c
	@printf "%s\n" 'void	ps_rotate(t_node **st1, t_node **st2, char ab)'>> ps_moves.c
	@printf "%s\n" '{'>> ps_moves.c
	@printf "%s\n" '	t_node	*tail;'>> ps_moves.c
	@printf "%s\n" ''>> ps_moves.c
	@printf "%s\n" '	if (st2 && *st2 && (*st2)->next)'>> ps_moves.c
	@printf "%s\n" '	{'>> ps_moves.c
	@printf "%s\n" '		tail = ps_findend(*st2);'>> ps_moves.c
	@printf "%s\n" '		tail -> next = *st2;'>> ps_moves.c
	@printf "%s\n" '		*st2 = (*st2)-> next;'>> ps_moves.c
	@printf "%s\n" '		(*st2)-> prev = NULL;'>> ps_moves.c
	@printf "%s\n" '		tail -> next -> prev = tail;'>> ps_moves.c
	@printf "%s\n" '		tail -> next -> next = NULL;'>> ps_moves.c
	@printf "%s\n" '		racc_print(1, '\"'rr'\\''n'\"');'>> ps_moves.c
	@printf "%s\n" '	}'>> ps_moves.c
	@printf "%s\n" '	if (st1 && *st1 && (*st1)-> next)'>> ps_moves.c
	@printf "%s\n" '	{'>> ps_moves.c
	@printf "%s\n" '		tail = ps_findend(*st1);'>> ps_moves.c
	@printf "%s\n" '		tail -> next = *st1;'>> ps_moves.c
	@printf "%s\n" '		*st1 = (*st1)-> next;'>> ps_moves.c
	@printf "%s\n" '		(*st1)-> prev = NULL;'>> ps_moves.c
	@printf "%s\n" '		tail -> next -> prev = tail;'>> ps_moves.c
	@printf "%s\n" '		tail -> next -> next = NULL;'>> ps_moves.c
	@printf "%s\n" '		if (!st2)'>> ps_moves.c
	@printf "%s\n" '			racc_print(1, '\"'r'\%'c'\\''n'\"', ab);'>> ps_moves.c
	@printf "%s\n" '	}'>> ps_moves.c
	@printf "%s\n" '	return ;'>> ps_moves.c
	@printf "%s\n" '}'>> ps_moves.c
	@printf "%s\n" '/*Can execute ra or rb depending on which stack is passed on st1. The ab'>> ps_moves.c
	@printf "%s\n" 'parameter serves to then print the corresponding character ('\''a'\'' or '\''b'\'').'>> ps_moves.c
	@printf "%s\n" 'If both arguments are used, in other words, if st2 is not NULL, then the'>> ps_moves.c
	@printf "%s\n" 'function expects having been served both stacks, in which case it will do'>> ps_moves.c
	@printf "%s\n" 'the rotate on both and print rr accordingly. It doesn'\''t consider having'>> ps_moves.c
	@printf "%s\n" 'no nodes or only one as an error. It will simply rotate whatever it can*/'>> ps_moves.c
	@printf "%s\n" ''>> ps_moves.c
	@printf "%s\n" 'void	ps_revotate(t_node **st1, t_node **st2, char ab)'>> ps_moves.c
	@printf "%s\n" '{'>> ps_moves.c
	@printf "%s\n" '	t_node	*tail;'>> ps_moves.c
	@printf "%s\n" ''>> ps_moves.c
	@printf "%s\n" '	if (st2 && *st2 && (*st2)->next)'>> ps_moves.c
	@printf "%s\n" '	{'>> ps_moves.c
	@printf "%s\n" '		tail = ps_findend(*st2);'>> ps_moves.c
	@printf "%s\n" '		tail -> prev -> next = NULL;'>> ps_moves.c
	@printf "%s\n" '		tail -> prev = NULL;'>> ps_moves.c
	@printf "%s\n" '		(*st2)-> prev = tail;'>> ps_moves.c
	@printf "%s\n" '		tail -> next = *st2;'>> ps_moves.c
	@printf "%s\n" '		*st2 = tail;'>> ps_moves.c
	@printf "%s\n" '		racc_print(1, '\"'rrr'\\''n'\"');'>> ps_moves.c
	@printf "%s\n" '	}'>> ps_moves.c
	@printf "%s\n" '	if (st1 && *st1 && (*st1)-> next)'>> ps_moves.c
	@printf "%s\n" '	{'>> ps_moves.c
	@printf "%s\n" '		tail = ps_findend(*st1);'>> ps_moves.c
	@printf "%s\n" '		tail -> prev -> next = NULL;'>> ps_moves.c
	@printf "%s\n" '		tail -> prev = NULL;'>> ps_moves.c
	@printf "%s\n" '		(*st1)-> prev = tail;'>> ps_moves.c
	@printf "%s\n" '		tail -> next = *st1;'>> ps_moves.c
	@printf "%s\n" '		*st1 = tail;'>> ps_moves.c
	@printf "%s\n" '		if (!st2)'>> ps_moves.c
	@printf "%s\n" '			racc_print(1, '\"'rr'\%'c'\\''n'\"', ab);'>> ps_moves.c
	@printf "%s\n" '	}'>> ps_moves.c
	@printf "%s\n" '	return ;'>> ps_moves.c
	@printf "%s\n" '}'>> ps_moves.c
	@printf "%s\n" '/*Can execute rra or rrb depending on which stack is passed on st1. The ab'>> ps_moves.c
	@printf "%s\n" 'parameter serves to then print the corresponding character ('\''a'\'' or '\''b'\'').'>> ps_moves.c
	@printf "%s\n" 'If both arguments are used, in other words, if st2 is not NULL, then the'>> ps_moves.c
	@printf "%s\n" 'function expects having been served both stacks, in which case it will do'>> ps_moves.c
	@printf "%s\n" 'the reverse rotate on both and print rrr accordingly. It doesn'\''t consider'>> ps_moves.c
	@printf "%s\n" 'having no nodes or only one as an error. It will simply reverse rotate '>> ps_moves.c
	@printf "%s\n" 'whatever it can*/'>> ps_moves.c
	@open ps_moves.c
	@printf "$(RESET)🦝"

.PHONY: all clean fclean re restore
