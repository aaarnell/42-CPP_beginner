# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarnell <aarnell@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/01 16:16:16 by aarnell           #+#    #+#              #
#    Updated: 2022/05/03 20:47:21 by aarnell          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	ex03

FLAGS	= 	-Wall -Werror -Wextra -std=c++98

SRS		= 	main.cpp	Weapon.cpp	HumanA.cpp	HumanB.cpp

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
