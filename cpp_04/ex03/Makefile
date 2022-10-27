# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 16:34:20 by rliu              #+#    #+#              #
#    Updated: 2022/10/27 16:47:32 by rliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC 		= c++
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98

NAME 	:= Interface_recap
SRCS    := main.cpp \
			AMateria.cpp \
			Ice.cpp \
			Cure.cpp \
			MateriaSource.cpp \
			Character.cpp

OBJS := $(SRCS:%.cpp=%.o)

%.o : %.cpp 
	$(CC) $(CPPFLAGS) $< -c $@
	
$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $@

all: $(NAME)

clean:	
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re