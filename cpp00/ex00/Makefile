# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarnell <aarnell@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/01 16:16:16 by aarnell           #+#    #+#              #
#    Updated: 2022/05/01 18:35:36 by aarnell          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	megaphone

FLAGS	= 	-Wall -Werror -Wextra -std=c++98

SRS		= 	megaphone.cpp

OBJS	=	$(SRS:.cpp=.o)

CC		=	c++

all : 		$(NAME)

%.o :		%.cpp
			$(CC) $(FLAGS) -c $< -o $@

$(NAME)	: 	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean :
			rm -f $(OBJS)

fclean : 	clean
			rm -f $(NAME)

re :		fclean all

.PHONY: all clean fclean re
