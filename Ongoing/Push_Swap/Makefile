# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/09 20:20:13 by lde-san-          #+#    #+#              #
#    Updated: 2025/10/09 16:53:44 by lde-san-         ###   ########.fr        #
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

COMPILE = cc -g -O0 -Wall -Werror -Wextra -I.

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

OBJ_DIR = obj/

OBJ = $(FILE:%.c=$(OBJ_DIR)%.o)

all: $(NAME)

$(NAME): $(LIB) pushswap.h
	$(COMPILE) $(NAME).c $(LIB) -o $(NAME)

$(LIB): $(OBJ) 
	ar -rcs $(LIB) $(OBJ)

$(OBJ_DIR)%.o: %.c | $(OBJ_DIR)
	@printf "$(NEOR)"
	$(COMPILE) -c $< -o $@
	@printf "$(RESET)\n"

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	@printf "$(BABY)"
	rm -rf $(OBJ_DIR)
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

boring: fclean build_boring_moves build_boring_errors
	@printf "$(NEOR) Rebuilding Makefile... $(RESET)"
	@printf "$(MINT)🦝\n"
	@sed -i '13s/.*/NAME = push_swap/' Makefile
	@sed -i '14s/.*/LIB = libpushswap.a/' Makefile
	@sed -i '15s/.*//' Makefile
	@sed -i '16s/.*//' Makefile
	@sed -i '17s/.*//' Makefile
	@sed -i '18s/.*//' Makefile
	@sed -i '19s/.*//' Makefile
	@sed -i '20s/.*//' Makefile
	@sed -i '21s/.*//' Makefile
	@sed -i '16s/.*/M''I''N''T	= \\033[38;2;55;250;133;48;2;0;0;0m/' Makefile
	@sed -i '17s/.*/N''E''O''R	= \\033[3m\\033[38;2;255;153;51m/' Makefile
	@sed -i '18s/.*/B''_''W''I    = \\033[1;37m/' Makefile
	@sed -i '19s/.*/R''E''S''E''T	= \\033[0m/' Makefile
	@sed -i '20s/.*/B''A''B''Y	= \\033[38;2;0;255;247m/' Makefile
	@sed -i '21s/.*/B''L''A''C''K	= \\033[38;2;0;0;0m/' Makefile
	@sed -i '22s/.*//' Makefile
	@sed -i '23s/.*/''C''O''M''P''I''L''E'' = cc -g -O0 -Wall -Werror -Wextra -I./' Makefile
	@sed -i '24s/.*//' Makefile
	@sed -i '25s/.*/FILE = ps_algorithm_utils_alpha.c/' Makefile
	@sed -i '26s/.*/FILE += ps_algorithm_utils_beta.c/' Makefile
	@sed -i '27s/.*/FILE += ps_init_utils.c/' Makefile
	@sed -i '28s/.*/FILE += ps_input_manager.c/' Makefile
	@sed -i '29s/.*/FILE += ps_list_gen.c/' Makefile
	@sed -i '30s/.*/FILE += ps_moves.c/' Makefile
	@sed -i '31s/.*/FILE += ps_sort_five_utils.c/' Makefile
	@sed -i '32s/.*/FILE += ps_sort_them_all.c/' Makefile
	@sed -i '33s/.*/FILE += ps_tiny_sorts.c/' Makefile
	@sed -i '34s/.*/FILE += racc_print.c/' Makefile
	@sed -i '35s/.*/FILE += racc_print_utils.c/' Makefile
	@sed -i '36s/.*//' Makefile
	@sed -i '37s/.*/OBJ_DIR = obj\//' Makefile
	@sed -i '38s/.*//' Makefile
	@sed -i '39s/.*/''O''B''J'' = $$(''F''I''L''E'':'\%'.c=$$(''O''B''J''_''D''I''R'')'\%'.o)/' Makefile
	@sed -i '40s/.*//' Makefile
	@sed -i '41s/.*/all: $$(''N''A''M''E'')/' Makefile
	@sed -i '42s/.*//' Makefile
	@sed -i '43s/.*/$$(''N''A''M''E''): $$(''L''I''B'') pushswap.h/' Makefile
	@sed -i '44s/.*/	$$(''C''O''M''P''I''L''E'') $$(''N''A''M''E'').c $$(''L''I''B'') -o $$(''N''A''M''E'')/' Makefile
	@sed -i '45s/.*//' Makefile
	@sed -i '46s/.*/$$(''L''I''B''): $$(''O''B''J'') /' Makefile
	@sed -i '47s/.*/	ar -rcs $$(''L''I''B'')'' $$(''O''B''J'')/' Makefile
	@sed -i '48s/.*//' Makefile
	@sed -i '49s/.*/$$(''O''B''J''_''D''I''R'')'\%'.o: '\%'.c | $$(''O''B''J''_''D''I''R'')/' Makefile
	@sed -i '50s/.*/	@printf '\"'$$(''N''E''O''R'')'\"'/' Makefile
	@sed -i '51s/.*/	$$(''C''O''M''P''I''L''E'') -c $$< -o $$@/' Makefile
	@sed -i '52s/.*/	@printf '\"'$$(''R''E''S''E''T'')\\n'\"'/' Makefile
	@sed -i '53s/.*//' Makefile
	@sed -i '54s/.*/$$(''O''B''J''_''D''I''R''):/' Makefile
	@sed -i '55s/.*/	mkdir -p $$(''O''B''J''_''D''I''R'')/' Makefile
	@sed -i '56s/.*//' Makefile
	@sed -i '57s/.*/clean:/' Makefile
	@sed -i '58s/.*/	@printf '\"'$$(''B''A''B''Y'')'\"'/' Makefile
	@sed -i '59s/.*/	rm -rf $$(''O''B''J''_''D''I''R'')/' Makefile
	@sed -i '60s/.*/	rm -rf $$(''L''I''B'')/' Makefile
	@sed -i '61s/.*/	@printf '\"'$$(''R''E''S''E''T'')'\"'/' Makefile
	@sed -i '62s/.*//' Makefile
	@sed -i '63s/.*/fclean: clean/' Makefile
	@sed -i '64s/.*/	@printf '\"'$$(''B''_''W''I'')'\"'/' Makefile
	@sed -i '65s/.*/	rm -f $$(''N''A''M''E'')/' Makefile
	@sed -i '66s/.*/	@printf '\"'$$(''R''E''S''E''T'')'\"'/' Makefile
	@sed -i '67s/.*//' Makefile
	@sed -i '68s/.*/re: fclean all/' Makefile
	@sed -i '69s/.*//' Makefile
	@sed -i '70s/.*//' Makefile
	@sed -i '71s/.*//' Makefile
	@sed -i '72s/.*//' Makefile
	@sed -i '73s/.*//' Makefile
	@sed -i '74s/.*//' Makefile
	@sed -i '75s/.*//' Makefile
	@sed -i '76s/.*//' Makefile
	@sed -i '77s/.*//' Makefile
	@sed -i '78s/.*//' Makefile
	@sed -i '79s/.*//' Makefile
	@sed -i '80s/.*//' Makefile
	@sed -i '81s/.*//' Makefile
	@sed -i '82s/.*//' Makefile
	@sed -i '83s/.*//' Makefile
	@sed -i '84s/.*//' Makefile
	@sed -i '85s/.*//' Makefile
	@sed -i '86s/.*//' Makefile
	@sed -i '87s/.*//' Makefile
	@sed -i '88s/.*//' Makefile
	@printf "$(RESET)"
	@$(MAKE) all

fun: fclean build_fun_moves build_fun_errors
	@printf "$(NEOR) Rebuilding Makefile... $(RESET)"
	@printf "$(MINT)🦝\n"
	@sed -i '13s/.*/NAME = push_swap/' Makefile
	@sed -i '14s/.*/LIB = libpushswap.a/' Makefile
	@sed -i '15s/.*//' Makefile
	@sed -i '16s/.*//' Makefile
	@sed -i '17s/.*//' Makefile
	@sed -i '18s/.*//' Makefile
	@sed -i '19s/.*//' Makefile
	@sed -i '20s/.*//' Makefile
	@sed -i '21s/.*//' Makefile
	@sed -i '16s/.*/M''I''N''T	= \\033[38;2;55;250;133;48;2;0;0;0m/' Makefile
	@sed -i '17s/.*/N''E''O''R	= \\033[3m\\033[38;2;255;153;51m/' Makefile
	@sed -i '18s/.*/B''_''W''I    = \\033[1;37m/' Makefile
	@sed -i '19s/.*/R''E''S''E''T	= \\033[0m/' Makefile
	@sed -i '20s/.*/B''A''B''Y	= \\033[38;2;0;255;247m/' Makefile
	@sed -i '21s/.*/B''L''A''C''K	= \\033[38;2;0;0;0m/' Makefile
	@sed -i '22s/.*//' Makefile
	@sed -i '23s/.*/COMPILE = cc -g -O0 -Wall -Werror -Wextra -I./' Makefile
	@sed -i '24s/.*//' Makefile
	@sed -i '25s/.*/FILE = ps_algorithm_utils_alpha.c/' Makefile
	@sed -i '26s/.*/FILE += ps_algorithm_utils_beta.c/' Makefile
	@sed -i '27s/.*/FILE += ps_init_utils.c/' Makefile
	@sed -i '28s/.*/FILE += ps_input_manager.c/' Makefile
	@sed -i '29s/.*/FILE += ps_list_gen.c/' Makefile
	@sed -i '30s/.*/FILE += ps_moves.c/' Makefile
	@sed -i '31s/.*/FILE += ps_sort_five_utils.c/' Makefile
	@sed -i '32s/.*/FILE += ps_sort_them_all.c/' Makefile
	@sed -i '33s/.*/FILE += ps_tiny_sorts.c/' Makefile
	@sed -i '34s/.*/FILE += racc_print.c/' Makefile
	@sed -i '35s/.*/FILE += racc_print_utils.c/' Makefile
	@sed -i '36s/.*//' Makefile
	@sed -i '37s/.*/SRC_DIR = src\//' Makefile
	@sed -i '38s/.*/OBJ_DIR = obj\//' Makefile
	@sed -i '39s/.*//' Makefile
	@sed -i '40s/.*/''S''R''C'' = $$(addprefix $$(''S''R''C''_''D''I''R''),$$(''F''I''L''E''))/' Makefile
	@sed -i '41s/.*/''O''B''J'' = $$(''S''R''C'':$$(''S''R''C''_''D''I''R'')'\%'.c=$$(''O''B''J''_''D''I''R'')'\%'.o)/' Makefile
	@sed -i '42s/.*//' Makefile
	@sed -i '43s/.*/.''P''R''E''C''I''O''U''S'': $$(''S''R''C'')/' Makefile
	@sed -i '44s/.*//' Makefile
	@sed -i '45s/.*/all: $$(''N''A''M''E'')/' Makefile
	@sed -i '46s/.*//' Makefile
	@sed -i '47s/.*/$$(''N''A''M''E''): $$(''L''I''B'') pushswap.h/' Makefile
	@sed -i '48s/.*/	$$(''C''O''M''P''I''L''E'') $$(''N''A''M''E'').c $$(''L''I''B'') -o $$(''N''A''M''E'')/' Makefile
	@sed -i '49s/.*//' Makefile
	@sed -i '50s/.*/$$(''L''I''B''): $$(''O''B''J'') /' Makefile
	@sed -i '51s/.*/	ar -rcs $$(''L''I''B'') $$(''O''B''J'')/' Makefile
	@sed -i '52s/.*//' Makefile
	@sed -i '53s/.*/$$(''O''B''J''_''D''I''R'')'\%'.o: $$(''S''R''C''_''D''I''R'')'\%'.c | $$(''O''B''J''_''D''I''R'')/' Makefile
	@sed -i '54s/.*/	@printf '\"'$$(''N''E''O''R'')'\"'/' Makefile
	@sed -i '55s/.*/	$$(''C''O''M''P''I''L''E'') -c $$< -o $$@/' Makefile
	@sed -i '56s/.*/	@printf '\"'$$(''R''E''S''E''T'')\\n'\"'/' Makefile
	@sed -i '57s/.*//' Makefile
	@sed -i '58s/.*/$$(''O''B''J''_''D''I''R''):/' Makefile
	@sed -i '59s/.*/	mkdir -p $$(''O''B''J''_''D''I''R'')/' Makefile
	@sed -i '60s/.*//' Makefile
	@sed -i '61s/.*/$$(''S''R''C''_''D''I''R'')'\%'.c: $$(''S''R''C''_''D''I''R'')/' Makefile
	@sed -i '62s/.*/	@printf '\"'$$(''M''I''N''T'')'\"'/' Makefile
	@sed -i '63s/.*/	mv $$(@:$$(''S''R''C''_''D''I''R'')'\%'='\%') $$(''S''R''C''_''D''I''R'')/' Makefile
	@sed -i '64s/.*/	@printf '\"'$$(''R''E''S''E''T'')'\"'/' Makefile
	@sed -i '65s/.*//' Makefile
	@sed -i '66s/.*/$$(''S''R''C''_''D''I''R''):/' Makefile
	@sed -i '67s/.*/	mkdir -p $$(''S''R''C''_''D''I''R'')/' Makefile
	@sed -i '68s/.*/	cp pushswap.h $$(''S''R''C''_''D''I''R'')/' Makefile
	@sed -i '69s/.*//' Makefile
	@sed -i '70s/.*/.\/$$(''F''I''L''E''):/' Makefile
	@sed -i '71s/.*/	@printf '\"'$$(''N''E''O''R'')'\"'/' Makefile
	@sed -i '72s/.*/	mv -f $$(''S''R''C''_''D''I''R'')$$(@:.\/'\%'='\%') ./' Makefile
	@sed -i '73s/.*/	@printf '\"'$$(''R''E''S''E''T'')\\n'\"'/' Makefile
	@sed -i '74s/.*//' Makefile
	@sed -i '75s/.*/clean: .\/$$(''F''I''L''E'')/' Makefile
	@sed -i '76s/.*/	@printf '\"'$$(''B''A''B''Y'')'\"'/' Makefile
	@sed -i '77s/.*/	rm -rf $$(''O''B''J''_''D''I''R'')/' Makefile
	@sed -i '78s/.*/	rm -rf $$(''S''R''C''_''D''I''R'')/' Makefile
	@sed -i '79s/.*/	rm -rf $$(''L''I''B'')/' Makefile
	@sed -i '80s/.*/	@printf '\"'$$(''R''E''S''E''T'')'\"'/' Makefile
	@sed -i '81s/.*//' Makefile
	@sed -i '82s/.*/fclean: clean/' Makefile
	@sed -i '83s/.*/	@printf '\"'$$(''B''_''W''I'')'\"'/' Makefile
	@sed -i '84s/.*/	rm -f $$(''N''A''M''E'')/' Makefile
	@sed -i '85s/.*/	@printf '\"'$$(''R''E''S''E''T'')'\"'/' Makefile
	@sed -i '86s/.*//' Makefile
	@sed -i '87s/.*/re: fclean all/' Makefile
	@sed -i '88s/.*//' Makefile
	@printf "$(RESET)"
	@$(MAKE) all

build_fun_errors:
	@printf "$(NEOR) 🦝 Rebuilding ps_init_utils.c... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@sleep 0.5
	@> ps_init_utils.c
	printf "%s\n" '/* ************************************************************************** */'>> ps_init_utils.c
	printf "%s\n" '/*                                                                            */'>> ps_init_utils.c
	printf "%s\n" '/*                                                        :::      ::::::::   */'>> ps_init_utils.c
	printf "%s\n" '/*   ps_init_utils.c                                    :+:      :+:    :+:   */'>> ps_init_utils.c
	printf "%s\n" '/*                                                    +:+ +:+         +:+     */'>> ps_init_utils.c
	printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */'>> ps_init_utils.c
	printf "%s\n" '/*                                                +#+#+#+#+#+   +#+           */'>> ps_init_utils.c
	printf "%s\n" '/*   Created: 2025/09/18 18:30:04 by lde-san-          #+#    #+#             */'>> ps_init_utils.c
	printf "%s\n" '/*   Updated: 2025/09/21 11:20:58 by lde-san-         ###   ########.fr       */'>> ps_init_utils.c
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
	@printf "%s\n" '	allocated[guide] = '\'''\\'0'\'';'>> ps_init_utils.c
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
	@printf "%s\n" '/*Calculates the length of a '\"'Valid'\"' C string. Excluding the '\\'0 at the end*/'>> ps_init_utils.c
	@printf "%s\n" ''>> ps_init_utils.c
	@printf "%s\n" 'void	fail(void)'>> ps_init_utils.c
	@printf "%s\n" '{'>> ps_init_utils.c
	@printf "%s\n" '	racc_print(2, BLOD'\"'Error'\\'n'\"');'>> ps_init_utils.c
	@printf "%s\n" '	exit(1);'>> ps_init_utils.c
	@printf "%s\n" '}'>> ps_init_utils.c
	@printf "%s\n" '/*Prints Error'\\'n to the stderror, and then exits with the EXIT_FAILURE signal*/'>> ps_init_utils.c
	@printf "$(RESET)"
	@sleep 0.5

build_boring_errors:
	@printf "$(NEOR) 🦝 Rebuilding ps_init_utils.c... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@sleep 0.5
	@> ps_init_utils.c
	printf "%s\n" '/* ************************************************************************** */'>> ps_init_utils.c
	printf "%s\n" '/*                                                                            */'>> ps_init_utils.c
	printf "%s\n" '/*                                                        :::      ::::::::   */'>> ps_init_utils.c
	printf "%s\n" '/*   ps_init_utils.c                                    :+:      :+:    :+:   */'>> ps_init_utils.c
	printf "%s\n" '/*                                                    +:+ +:+         +:+     */'>> ps_init_utils.c
	printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */'>> ps_init_utils.c
	printf "%s\n" '/*                                                +#+#+#+#+#+   +#+           */'>> ps_init_utils.c
	printf "%s\n" '/*   Created: 2025/09/18 18:30:04 by lde-san-          #+#    #+#             */'>> ps_init_utils.c
	printf "%s\n" '/*   Updated: 2025/10/09 01:57:41 by lde-san-         ###   ########.fr       */'>> ps_init_utils.c
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
	@printf "%s\n" '	allocated[guide] = '\'''\\'0'\'';'>> ps_init_utils.c
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
	@printf "%s\n" '/*Calculates the length of a '\"'Valid'\"' C string. Excluding the '\\'0 at the end*/'>> ps_init_utils.c
	@printf "%s\n" ''>> ps_init_utils.c
	@printf "%s\n" 'void	fail(void)'>> ps_init_utils.c
	@printf "%s\n" '{'>> ps_init_utils.c
	@printf "%s\n" '	racc_print(2, '\"'Error'\\'n'\"');'>> ps_init_utils.c
	@printf "%s\n" '	exit(1);'>> ps_init_utils.c
	@printf "%s\n" '}'>> ps_init_utils.c
	@printf "%s\n" '/*Prints Error'\\'n to the stderror, and then exits with the EXIT_FAILURE signal*/'>> ps_init_utils.c
	@printf "$(RESET)"
	@sleep 0.5

build_fun_moves:
	@printf "$(NEOR) 🦝 Rebuilding ps_moves.c... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@sleep 0.5
	@> ps_moves.c
	printf "%s\n" '/* ************************************************************************** */'>> ps_moves.c
	printf "%s\n" '/*                                                                            */'>> ps_moves.c
	printf "%s\n" '/*                                                        :::      ::::::::   */'>> ps_moves.c
	printf "%s\n" '/*   ps_moves.c                                         :+:      :+:    :+:   */'>> ps_moves.c
	printf "%s\n" '/*                                                    +:+ +:+         +:+     */'>> ps_moves.c
	printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */'>> ps_moves.c
	printf "%s\n" '/*                                                +#+#+#+#+#+   +#+           */'>> ps_moves.c
	printf "%s\n" '/*   Created: 2025/09/21 15:34:26 by lde-san-          #+#    #+#             */'>> ps_moves.c
	printf "%s\n" '/*   Updated: 2025/10/08 22:20:00 by lde-san-         ###   ########.fr       */'>> ps_moves.c
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
	@printf "%s\n" '		racc_print(1, B_WI'\"'s'\%'c'\\'n'\"'RSET, ab);'>> ps_moves.c
	@printf "%s\n" '		return ;'>> ps_moves.c
	@printf "%s\n" '	}'>> ps_moves.c
	@printf "%s\n" '	(*st2)-> prev = (*st2)-> next;'>> ps_moves.c
	@printf "%s\n" '	(*st2)-> next = (*st2)-> next -> next;'>> ps_moves.c
	@printf "%s\n" '	(*st2)-> prev -> next = *st2;'>> ps_moves.c
	@printf "%s\n" '	(*st2)-> prev -> prev = NULL;'>> ps_moves.c
	@printf "%s\n" '	if ((*st2)-> next)'>> ps_moves.c
	@printf "%s\n" '		(*st2)-> next -> prev = *st2;'>> ps_moves.c
	@printf "%s\n" '	*st2 = (*st2)-> prev;'>> ps_moves.c
	@printf "%s\n" '	racc_print(1, B_WI'\"'ss'\\'n'\"'RSET);'>> ps_moves.c
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
	@printf "%s\n" '	racc_print(1, B_WI'\"'p'\%'c'\\'n'\"'RSET, ab);'>> ps_moves.c
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
	@printf "%s\n" '		racc_print(1, B_WI'\"'rr'\\'n'\"'RSET);'>> ps_moves.c
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
	@printf "%s\n" '			racc_print(1, B_WI'\"'r'\%'c'\\'n'\"'RSET, ab);'>> ps_moves.c
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
	@printf "%s\n" '		racc_print(1, B_WI'\"'rrr'\\'n'\"'RSET);'>> ps_moves.c
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
	@printf "%s\n" '			racc_print(1, B_WI'\"'rr'\%'c'\\'n'\"'RSET, ab);'>> ps_moves.c
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
	@printf "$(RESET)"
	@sleep 0.5

build_boring_moves:
	@printf "$(NEOR) 🦝 Rebuilding ps_moves.c... $(RESET)"
	@printf "$(MINT)🦝\n\n"
	@sleep 0.5
	@> ps_moves.c
	printf "%s\n" '/* ************************************************************************** */'>> ps_moves.c
	printf "%s\n" '/*                                                                            */'>> ps_moves.c
	printf "%s\n" '/*                                                        :::      ::::::::   */'>> ps_moves.c
	printf "%s\n" '/*   ps_moves.c                                         :+:      :+:    :+:   */'>> ps_moves.c
	printf "%s\n" '/*                                                    +:+ +:+         +:+     */'>> ps_moves.c
	printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */'>> ps_moves.c
	printf "%s\n" '/*                                                +#+#+#+#+#+   +#+           */'>> ps_moves.c
	printf "%s\n" '/*   Created: 2025/09/21 15:34:26 by lde-san-          #+#    #+#             */'>> ps_moves.c
	printf "%s\n" '/*   Updated: 2025/10/09 01:59:25 by lde-san-         ###   ########.fr       */'>> ps_moves.c
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
	@printf "%s\n" '		racc_print(1, '\"'s'\%'c'\\'n'\"', ab);'>> ps_moves.c
	@printf "%s\n" '		return ;'>> ps_moves.c
	@printf "%s\n" '	}'>> ps_moves.c
	@printf "%s\n" '	(*st2)-> prev = (*st2)-> next;'>> ps_moves.c
	@printf "%s\n" '	(*st2)-> next = (*st2)-> next -> next;'>> ps_moves.c
	@printf "%s\n" '	(*st2)-> prev -> next = *st2;'>> ps_moves.c
	@printf "%s\n" '	(*st2)-> prev -> prev = NULL;'>> ps_moves.c
	@printf "%s\n" '	if ((*st2)-> next)'>> ps_moves.c
	@printf "%s\n" '		(*st2)-> next -> prev = *st2;'>> ps_moves.c
	@printf "%s\n" '	*st2 = (*st2)-> prev;'>> ps_moves.c
	@printf "%s\n" '	racc_print(1, '\"'ss'\\'n'\"');'>> ps_moves.c
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
	@printf "%s\n" '	racc_print(1, '\"'p'\%'c'\\'n'\"', ab);'>> ps_moves.c
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
	@printf "%s\n" '		racc_print(1, '\"'rr'\\'n'\"');'>> ps_moves.c
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
	@printf "%s\n" '			racc_print(1, '\"'r'\%'c'\\'n'\"', ab);'>> ps_moves.c
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
	@printf "%s\n" '		racc_print(1, '\"'rrr'\\'n'\"');'>> ps_moves.c
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
	@printf "%s\n" '			racc_print(1, '\"'rr'\%'c'\\'n'\"', ab);'>> ps_moves.c
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
	@printf "$(RESET)"
	@sleep 0.5

.PHONY: all clean fclean re restore@$(MAKE)
