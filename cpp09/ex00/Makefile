# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 12:52:33 by hgeffroy          #+#    #+#              #
#    Updated: 2023/11/15 08:41:17 by hgeffroy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#--variables-------------------------------------------------------------------#

NAME            =       btc
DEBUG           =       no

#--includes & libraries--------------------------------------------------------#

INC_DIR         =       ./

HEADERS			=		BitcoinExchange.hpp

#--sources & objects-----------------------------------------------------------#

SOURCES			=		main.cpp \
						BitcoinExchange.cpp

OBJ_DIR         =       .objs/

#--flags-----------------------------------------------------------------------#

CFLAGS          =       -Wall -Wextra -std=c++98 -I $(INC_DIR) #-Werror
CPP				=		c++

#--debug flags-----------------------------------------------------------------#

DFLAGS          =       -fsanitize=address -g3

ifeq ($(DEBUG), yes)
CFLAGS          +=      $(DFLAGS)
endif

#--objects---------------------------------------------------------------------#

OBJECTS =       $(addprefix $(OBJ_DIR), $(SOURCES:.cpp=.o))

#--global rules----------------------------------------------------------------#

.DEFAULT_GOAL = all

#--compilation rules-----------------------------------------------------------#

all:
		$(MAKE) $(NAME) -j

$(NAME): $(OBJECTS)
		$(CPP) $(CFLAGS) $(OBJECTS) -o $@

$(OBJ_DIR)%.o: %.cpp $(HEADERS)
		mkdir -p $(dir $@)
		$(CPP) $(CFLAGS) -c $< -o $@

#--libs, debugs & bonus--------------------------------------------------------#

debug:
		$(MAKE) re -j DEBUG=yes

#--re, clean & fclean----------------------------------------------------------#

re:
		clear
		$(MAKE) fclean
		$(MAKE) -j all

clean:
		$(RM) -rf $(OBJ_DIR)

fclean:
		clear
		$(MAKE) clean
		$(RM) $(NAME)

#--PHONY-----------------------------------------------------------------------#

.PHONY: all debug re clean fclean