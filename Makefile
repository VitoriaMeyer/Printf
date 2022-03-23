# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 11:03:07 by vmeyer-s          #+#    #+#              #
#    Updated: 2022/03/23 00:45:54 by vmeyer-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Werror -Wextra -g
CC 	= @cc
RM 	= @rm -f

NAME 	= libftprintf.a

# $(VERBOSE).SILENT: mesmo que @ #
#animations shits
E	= @echo
S	= @sleep 
PF	= @printf

CP	= $(E) "\033[2;35m♡ -------->> Compiling Printf <<--------- ♡ \n"
BB	= $(E) "\033[2;35m♡ --------------------------------------- ♡ \n"
# ------------------------------- #

SRC 	= 	ft_printf.c	\
		ft_lib.c 	\

OBJS 	= $(SRC:.c=.o)

$(NAME) :	$(OBJS)
# -- Compiling PRINTF -- #
#1- frame
		$(PF) "\033c\n"
		$(CP)
		@ar rcs $(NAME) $(OBJS)	
		@say -r 325 "Compiling PrintF"
		$(E) "\033[0;35m              ► Loading \n"
		$(BB)
		$(S) 0.5
		$(PF) "\033r"
#2- frame	
		$(PF) "\033c\n"
		$(CP)
		$(E) "\033[0;35m              ► Loading .\n"
		$(BB)
		$(S) 0.5
		$(PF) "\033r"
#3- frame 
		$(PF) "\033c\n"
		$(CP)
		$(E) "\033[0;35m              ► Loading ..\n"
		$(BB)
		$(S) 0.5
		$(PF) "\033r"
#4- frame
		$(PF) "\033c\n"
		$(CP)
		$(E) "\033[0;35m              ► Loading ...\n"
		$(BB)
		$(S) 0.7
		$(PF) "\033r"
#5- frame green
		$(PF) "\033c\n"
		$(E) "\033[2;32m♡ -------->> Compiling Printf <<--------- ♡ \n"
		$(E) "\033[1;;32m     ✔ Printf Compiled! (ɔ ◔ ‿ ◔)ɔ ♥\n"
		$(E) "\033[2;32m♡ --------------------------------------- ♡ \n"
		@say -r 325 "Compiling is done. Have fun print éfin"
		
all: $(NAME)

clean:
		$(PF) "\033c\n"
		$(E) "\033[1;91m ------>> ✘ (҂◡̀_◡́)ᕤ Cleaning ✘ <<------ \n"
		$(S) 0.1
		$(RM) $(OBJS)
		$(S) 0.5
		$(PF) "\033c\n"

fclean:	clean
		$(RM) $(NAME)
	
re:	fclean all

party:
		$(PF) "\033c"
		$(E) "\n\033[35m♪┏(・o･)┛♪"
		$(S) 1
		$(PF) "\033c"
		$(E) "\033[1;33m♪┗(・o･)┓♪"
		$(S) 1
		$(PF) "\033c"
		$(E) "\n\033[36m♪┏(・o･)┛♪"
		$(S) 1
		$(PF) "\033c"
		$(E) "\033[34m♪┗(・o･)┓♪\n"

