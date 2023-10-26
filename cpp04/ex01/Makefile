# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 12:52:33 by hgeffroy          #+#    #+#              #
#    Updated: 2023/10/26 14:57:55 by hgeffroy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#--variables-------------------------------------------------------------------#

NAME            =       zoo
DEBUG           =       no

#--includes & libraries--------------------------------------------------------#

INC_DIR         =       ./

HEADERS			=		Animal.hpp \
						Cat.hpp \
						Dog.hpp \
						WrongAnimal.hpp \
						WrongCat.hpp

#--sources & objects-----------------------------------------------------------#

SOURCES			=		main.cpp \
						Animal.cpp \
						Cat.cpp \
						Dog.cpp \
						WrongAnimal.cpp \
						WrongCat.cpp
						
OBJ_DIR         =       .objs/

#--flags-----------------------------------------------------------------------#

CFLAGS          =       -g3 -Wall -Wextra -Werror -std=c++98 -I $(INC_DIR)
CPP				=		c++

#--debug flags-----------------------------------------------------------------#

DFLAGS          =       -fsanitize=address

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

$(NAME): $(OBJECTS) $(HEADERS)
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