# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/07 15:21:54 by lde-san-          #+#    #+#              #
#    Updated: 2025/06/07 15:22:28 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MINT	= \033[38;2;55;250;133;48;2;0;0;0m
NEOR	= \033[3m\033[38;2;255;153;51m
RESET	= \033[0m

FILES = cora
FILES += corb
FILES += corc
FILES += parrot.txt
FILES += p_racc.txt
FILES += test_01.txt
FILES += test_02.txt
FILES += test_gnl.c

all: $(FILES)

($FILES):
  @$(MAKE) build_cora
  @$(MAKE) build_corb
  @$(MAKE) build_corc
  @$(MAKE) build_parrot.txt
  @$(MAKE) build_p_racc.txt
  @$(MAKE) build_test_01.txt
  @$(MAKE) build_test_02.txt
  @$(MAKE) build_test_gnl.c

test_mandatory:
  

.PHONY: all ($FILES) build_test_gnl.c


