# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 18:03:43 by rliu              #+#    #+#              #
#    Updated: 2022/10/10 14:50:37 by rliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= c++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98

NAME 	:= Fixed

SRCS    := main.cpp Fixed.cpp

OBJS := $(SRCS:%.cpp=%.o)

%.o: %.cpp
	${CC} ${CFLAGS} -c $< 

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ 

all: $(NAME)

clean:	
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re