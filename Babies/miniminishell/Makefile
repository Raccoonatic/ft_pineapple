# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/28 20:19:38 by lde-san-          #+#    #+#              #
#    Updated: 2026/02/17 18:29:23 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell
LIBFT = ./inc/libft/libft.a

NEOR	= \033[3m\033[38;2;255;153;51m
MINT    = \033[1;38;2;55;250;133m
ORNG    = \033[1;38;2;255;153;51m
PURP	= \033[1;38;2;174;5;252m
PINK    = \033[1;38;2;255;0;251m
BABY    = \033[1;38;2;0;255;247m
BLOD	= \033[1;38;2;255;0;0m
LIME    = \033[1;38;2;0;255;0m
BLAK	= \033[1;38;2;0;0;0m
B_WI    = \033[1;37m
RSET	= \033[0m

MAIN_FILE = mini_minishell.c

COMPILE = cc -g -O0 -Wall -Werror -Wextra -I./inc/libft/includes

all: $(NAME)

$(NAME): $(LIBFT)
	@printf "$(BABY)"
	$(COMPILE) $(MAIN_FILE) $(LIBFT) -o $(NAME)
	@printf "$(MINT)"
	@ls -la
	@printf "$(RSET)"

$(LIBFT):
	@printf "$(NEOR)"
	@make -C ./inc/libft
	@printf "$(RSET)"

clean:
	@printf "$(LIME)"
	@make -C ./inc/libft clean
	@sleep 0.3
	@printf "$(BLOD)"
	rm -rf $(OBJ_DIR)
	@sleep 0.3
	@printf "$(RSET)"

fclean: clean
	@printf "$(B_WI)"
	@make -C ./inc/libft fclean
	@sleep 0.3
	@printf "$(PURP)"
	rm -f $(NAME)
	@printf "$(MINT)"
	@sleep 0.3
	@ls -la
	@printf "$(RSET)"

re: fclean all

# /////////////////////// -- * Functionality * -- ////////////////////// #

open:
	@printf "$(MINT)"
	for f in $(SRC); do xdg-open $$f; done
	@sleep 0.3
	@printf "$(ORNG)"
	find . -maxdepth 2 -name "*.h" -exec xdg-open {} \;
	@printf "$(RSET)"

env_clear:
	@printf "$(MINT)"
	@printf "\n\t\tPapi... \"unset\" needs to run in the parent process."
	@printf "\n\t\t\tCopy, paste and run this command:\n    \n"
	@printf "$(BABY)"
	@echo "unset XDG_CONFIG_DIRS _ DOCKER_HOST LIBVIRT_DEFAULT_URI XDG_SEAT_PATH GDM_LANG XDG_GREETER_DATA_DIR GPG_AGENT_INFO KRB5CCNAME FT_HOOK_PATHNAME FT_HOOK_NAME LANGUAGE GTK_IM_MODULE XDG_SESSION_PATH SSH_AGENT_LAUNCHER GNOME_SHELL_SESSION_MODE GNOME_TERMINAL_SCREEN GNOME_TERMINAL_SERVICE GSM_SKIP_SSH_AGENT_WORKAROUND GTK_MODULES CLUTTER_DISABLE_MIPMAPPED_TEXT COLORTERM DBUS_SESSION_BUS_ADDRESS DESKTOP_SESSION DISPLAY GDMSESSION GNOME_DESKTOP_SESSION_ID GNOME_SETUP_DISPLAY _ _backup_glob BASH BASH_ALIASES BASH_ARGC BASH_ARGV BASH_ARGV0 BASH_CMDS BASH_COMMAND BASH_COMPLETION_VERSINFO BASH_LINENO BASH_LOADABLES_PATH BASHOPTS BASHPID BASH_SOURCE BASH_SUBSHELL BASH_VERSINFO BASH_VERSION COLUMNS COMP_WORDBREAKS DIRSTACK EPOCHREALTIME EPOCHSECONDS EUID __git_printf_supports_v GNOME_SHELL_SESSION_MODE GNOME_TERMINAL_SCREEN GNOME_TERMINAL_SERVICE GROUPS GSM_SKIP_SSH_AGENT_WORKAROUND GTK_MODULES HISTCMD HISTCONTROL HISTFILE HISTFILESIZE HISTSIZE HOME HOSTNAME HOSTTYPE IFS LANG LESS LESSCLOSE LESSOPEN LINENO LINES LOGNAME LS_COLORS LSCOLORS MACHTYPE MAIL MAILCHECK MEMORY_PRESSURE_WATCH MEMORY_PRESSURE_WRITE OLDPWD OPTERR OPTIND OSTYPE PAGER PIPESTATUS PPID PS1 PS2 PS4 PWD QT_ACCESSIBILITY QT_IM_MODULE RANDOM SECONDS SESSION_MANAGER SHELL SHELLOPTS SHLVL SRANDOM SSH_AUTH_SOCK SYSTEMD_EXEC_PID TERM UID USER USERNAME VTE_VERSION WAYLAND_DISPLAY XAUTHORITY XDG_CURRENT_DESKTOP XDG_DATA_DIRS XDG_MENU_PREFIX XDG_RUNTIME_DIR XDG_SESSION_CLASS XDG_SESSION_DESKTOP XDG_SESSION_TYPE XMODIFIERS _xspecs ZSH"
	@printf "$(B_WI)"

.PHONY: all clean fclean re bonus open env_clear
