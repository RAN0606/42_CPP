# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 16:18:42 by rliu              #+#    #+#              #
#    Updated: 2022/11/21 19:02:40 by rliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= c++
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98

NAME 	:= array
SRCS    := main.cpp

OBJS := $(SRCS:%.cpp=%.o)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $<
	
$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $@

all: $(NAME)

clean:	
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re