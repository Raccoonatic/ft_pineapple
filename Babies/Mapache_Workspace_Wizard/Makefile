# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mapache <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/19 19:58:17 by mapache           #+#    #+#              #
#    Updated: 2025/05/19 19:58:52 by mapache          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MINT    := \033[38;2;55;250;133;48;2;0;0;0m
MINT_B  := \033[1;38;2;55;250;133;48;2;0;0;0m
MINT_I  := \033[3;38;2;55;250;133;48;2;0;0;0m

RESET   := \033[0m

all:
	@printf "$(MINT_B)🦝 SETTING UP $(shell whoami) WORKSPACE 🦝$(RESET)\n"
	@sleep 2
	mkdir Mapache
	mv Makefile Mapache
	ssh-keygen
	cp .ssh/*.pub Mapache
	@printf "$(MINT)🦝 Main folder created with pub-key inside 🦝$(RESET)\n"
	@printf "$(MINT_I)  remember to add it to your git later$(RESET)\n"
	@sleep 3
	@clear
	@printf "$(MINT_B)🦝 Checking for updates! 🦝$(RESET)\n"
	@sudo apt install curl
	@sudo apt update
	@printf "$(MINT_B)🦝 Applying updates! 🦝$(RESET)\n"
	@sudo apt upgrade
	@printf "$(MINT_I)  Now everything should be up to date! $(RESET)\n"
	@sleep 3
	@clear
	@printf "$(MINT_B)🦝 LET'S MAKE SURE YOU HAVE GIT 🦝$(RESET)\n"
	@sleep 1
	sudo apt install git
	@printf "$(MINT_I) If you didn't, now you should have it $(RESET)\n"
	@sleep 2
	@clear
	@printf "$(MINT_B)🦝 NOW LET'S HOOK YOU UP WITH SOME ZHS GOODNESS 🦝$(RESET)\n"
	@sleep 0.5
	sudo apt install zsh
	@printf "$(MINT)🦝 BOOM goes the dynamite. That's done 🦝$(RESET)\n"
	@sleep 3
	@clear
	@printf "$(MINT_B)OH$(RESET)"
	@sleep 0.5
	@printf "$(MINT_B) MY$(RESET)"
	@sleep 0.5
	@printf "$(MINT_B) GOD...$(RESET)"
	@sleep 1
	@printf "$(MINT) Is Time for:$(RESET)\n"
	@sleep 0.5
	@printf "$(MINT_B)🦝 OH$(RESET)"
	@sleep 0.5
	@printf "$(MINT_B)-$(RESET)"
	@sleep 0.5
	@printf "$(MINT_B)MY$(RESET)"
	@sleep 0.5
	@printf "$(MINT_B)-$(RESET)"
	@sleep 0.5
	@printf "$(MINT_B)ZSH! 🦝$(RESET)\n"
	@sleep 0.5
	@RUNZSH=no CHSH=yes USER=$(shell whoami) sh -c "$$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
	@printf "$(MINT)🦝 See that? Pretty ain't it? 🦝$(RESET)\n"
	@sleep 3
	@clear
	@printf "$(MINT_B) 🦝 Miss VIM? The 42 Header? 🦝$(RESET)\n"
	@printf "$(MINT)PARA DE SOFRER RAPAZ! I got you 🤙$(RESET)\n"
	@sleep 1
	@printf "\n$(MINT_I) 🦝  A little bit'o python for spice ...: $(RESET)\n"
	@sudo apt install python3-full python3-venv python3-dev
	@printf "\n"
	@printf "$(MINT_I) 🦝 And now the good stuf ...: $(RESET)\n"
	git clone https://github.com/Kuninoto/installette
	cd installette ; bash installette.sh -v -h
	rm -f ~/.vimrc
	echo 'set noexpandtab' > ~/.vimrc
	echo 'set tabstop=4' >> ~/.vimrc
	echo 'set shiftwidth=4' >> ~/.vimrc
	echo 'set softtabstop=4' >> ~/.vimrc
	echo 'set autoindent' >> ~/.vimrc
	echo 'set smartindent' >> ~/.vimrc
	echo 'set number' >> ~/.vimrc
	echo 'set background=dark' >> ~/.vimrc
	echo 'set colorcolumn=81' >> ~/.vimrc
	echo 'set mouse=n' >> ~/.vimrc
	echo '' >> ~/.vimrc
	echo 'nnoremap <Leader>cc :set colorcolumn=81<cr>' >> ~/.vimrc
	echo 'nnoremap <Leader>ncc :set colorcolumn-=81<cr>' >> ~/.vimrc
	echo 'highlight ColorColumn ctermbg=darkgrey guibg=#212121' >> ~/.vimrc
	echo '' >> ~/.vimrc
	echo 'set termguicolors' >> ~/.vimrc
	echo '' >> ~/.vimrc
	echo 'syntax on' >> ~/.vimrc
	echo '' >> ~/.vimrc
	echo 'highlight clear Comment' >> ~/.vimrc
	echo 'highlight clear Type' >> ~/.vimrc
	echo 'highlight clear PreProc' >> ~/.vimrc
	echo 'highlight clear Function' >> ~/.vimrc
	echo 'highlight clear Constant' >> ~/.vimrc
	echo 'highlight clear String' >> ~/.vimrc
	echo 'highlight clear LineNr' >> ~/.vimrc
	echo 'highlight clear Keyword' >> ~/.vimrc
	echo 'highlight clear Normal' >> ~/.vimrc
	echo '' >> ~/.vimrc
	echo 'highlight ColorColumn guibg=#212121' >> ~/.vimrc
	echo 'highlight Comment guifg=#00fff7' >> ~/.vimrc
	echo 'highlight Type guifg=#00ffbb' >> ~/.vimrc
	echo 'highlight PreProc guifg=#a849e3' >> ~/.vimrc
	echo 'highlight Function guifg=#ffffff' >> ~/.vimrc
	echo 'highlight Constant guifg=#fc32e1' >> ~/.vimrc
	echo 'highlight String guifg=#ffb300' >> ~/.vimrc
	echo 'highlight LineNr guifg=#6e6e6e' >> ~/.vimrc
	echo 'highlight Keyword guifg=#ffc400' >> ~/.vimrc
	echo 'highlight Normal guifg=#ffffff' >> ~/.vimrc
	sed -i 's/let l:user = .*/let l:user = "lde-san-"/' ~/.vim/plugin/stdheader.vim
	sed -i 's/let l:mail = .*/let l:mail = "lde-san-@student.42porto.com"/' ~/.vim/plugin/stdheader.vim
	@printf "$(MINT)Now you should be able to simulate a 42-like envirorment$(RESET)\n"
	@printf "$(MINT_I)Remember you can install Norminette and Francinette with:$(RESET)\n"
	@printf "$(MINT_B)               'make norm' & 'make paco'$(RESET)\n"
	@sleep 5
	@clear
	@printf "$(MINT_B)🦝 THERE YOU GO! ALL SET AND READY TO RUMBLE 🦝$(RESET)\n"
	@sleep 1
	@printf "$(MINT)Thank you for using the Mapache Workspace Set-up Wizard$(RESET)\n"
	@printf "$(MINT)    Don't forget to add your public key to your\n    git. After that, you can go into your freshly\n    created 'Mapache' folder, and type make fruta\n      to clone La_Fruta to your workspace. :3$(RESET)\n"
	@printf "$(MINT_I)\n\n		fading dramatically into the void...$(RESET)\n"
	@sleep 1
	@printf "\n$(MINT_B)🦝 3$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B) 2$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B) 1$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B) 🦝$(RESET)"
	@sleep 1
	@clear
	@printf "$(MINT_B)🦝 Bye for now <3 🦝$(RESET)\n"
	@sleep 2
	@clear

fruta:
	@bash -c '\
		printf "$(MINT_B)🦝 Have you already set up the key? 🦝$(RESET)\n\n"; \
		cat *.pub; \
		printf "$(MINT_I)\n   Press ENTER to continue, or CTRL+SHIFT+C to cancel. 🤙$(RESET)\n"; \
		read; \
		printf "$(MINT_B)\n   💥 Alright! Lets summon the Pineapple! 💥$(RESET)\n"; \
	'
	@git config --global user.name Mapache
	@git config --global user.email ljtorcate@gmail.com
	@rm -rf *.pub
	git clone git@github.com:Raccoonatic/ft_pineapple.git La_Fruta

norm:
	sudo apt install python3-setuptools
	sudo apt install pipx
	pipx install norminette
	pipx install norminette --force
	pipx ensurepath

uninstall:
	@bash -c '\
		printf "$(MINT_B)🦝 THIS WILL DELETE EVERYTHING IN YOUR MAPACHE FOLDER 🦝$(RESET)\n"; \
		sleep 0.5; \
		printf "$(MINT)\n\t    Are you sure you want to continue?$(RESET)\n"; \
		sleep 0.5; \
		printf "$(MINT_B)\n\tYou are in: $(RESET)"; \
		pwd; \
		printf "$(MINT_B)   If you are not at the root of your Mapache folder, \n    or your git is not updated, STOP THIS IMEDIATELY$(RESET)\n"; \
		printf "$(MINT_I)\n   Press ENTER to continue, or CTRL+SHIFT+C to cancel. 🤙$(RESET)\n"; \
		read; \
		printf "$(MINT_B)   💥 You kept going, you brave boy. How sexy of you 💥$(RESET)\n"; \
	'
	@sleep 3
	@clear
	mv Makefile ~
	cd .. ; cd installette ; bash installette.sh -u
	cd .. ; pip uninstall norminette --break-system-packages
	rm -rf ~/.ssh
	rm -rf ~/.zshrc ~/.oh-my-zsh ~/.zsh_history ~/.zprofile ~/.zlogin ~/.zlogout
	rm -rf .zcompdump
	rm -rf .zcompdump*
	sudo apt remove vim
	rm -rf ~/installette/.git
	rm -rf ~/installette
	rm -rf ~/francinette/.git
	rm -rf ~/francinette
	sudo apt remove -y git
	@sleep 2
	@clear
	@printf "$(MINT_B)🦝 ALL DONE! HOPE YOU KNEW WHAT YOU WERE DOING 🦝$(RESET)\n"
	@sleep 1
	@printf "$(MINT)Thank you for using the Mapache Workspace Set-up Wizard$(RESET)\n"
	@printf "$(MINT)\nDon't forget to remove your public key from your git$(RESET)\n"
	@printf "$(MINT_I)\n\n		fading dramatically into the void...$(RESET)\n\n"
	rm -rf ~/.shell.pre-oh-my-zsh
	rm -rf ~/.vim
	rm -rf ~/.viminfo
	rm -rf ~/.vimrc
	rm -rf ~/.gitconfig
	cp /etc/skel/.bashrc ~/
	cp /etc/skel/.profile ~/
	chsh -s /bin/bash
	@sleep 0.5
	@printf "\n$(MINT_B)🦝 3$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B) 2$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B) 1$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B).$(RESET)"
	@sleep 0.3
	@printf "$(MINT_B) 🦝$(RESET)"
	@sleep 1
	@clear
	@printf "$(MINT_B)🦝 Bye for now <3 🦝$(RESET)\n       "
	rm -rf ~/Mapache
	@sleep 3
	@clear

paco:
	@printf "$(MINT_B)🦝 Sorry mate, couldnt make it work 🦝$(RESET)\n"
	@printf "$(MINT_I)\nJust run this from your home folder.\n     Is for the best. Love you!$(RESET)\n\n"
	@printf 'bash -c "$$(curl -fsSL https://raw.github.com/xicodomingues/francinette/master/bin/install.sh)"\n'

omg:
	rm -rf ~/.ssh
	rm -rf ~/.zshrc ~/.oh-my-zsh ~/.zsh_history ~/.zprofile ~/.zlogin ~/.zlogout
	rm -f ~/.bashrc ~/.bash_profile ~/.profile ~/.zshrc ~/.zshenv ~/.zlogin ~/.zlogout ~/.zcompdump* ~/.oh-my-zsh ~/.bash_logout
	rm -rf ~/.shell.pre-oh-my-zsh
	rm -rf .zcompdump
	rm -rf .zcompdump*

.PHONY: all fruta uninstall omg paco
