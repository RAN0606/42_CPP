# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rliu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 12:25:13 by rliu              #+#    #+#              #
#    Updated: 2022/08/24 15:42:53 by rliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC 		= c++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98

NAME 	:= megaphone
SRCS    := megaphone.cpp

OBJS := $(SRCS:%.cpp=%.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

all: $(NAME)

clean:	
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
