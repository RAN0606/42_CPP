# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rliu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 12:25:13 by rliu              #+#    #+#              #
#    Updated: 2022/09/26 16:09:29 by rliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC 		= c++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98

NAME 	:= phonebook

SRCS    := Phonebook.cpp Contact.cpp main.cpp

OBJS := $(SRCS:%.cpp=%.o)

%.o:	%.cpp
		$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

all: $(NAME)

clean:	
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
