# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarnell <aarnell@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/01 16:16:16 by aarnell           #+#    #+#              #
#    Updated: 2022/05/29 14:52:12 by aarnell          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex00

FLAGS	=	-Wall -Werror -Wextra -g -std=c++98

SRC		=	$(shell find . -type f -name '*.cpp')

OBJS	=	$(SRC:.cpp=.o)

D_FILES	=	$(SRC:.cpp=.d)

CXX		=	c++

all		:	$(NAME)

%.o :		%.cpp
			$(CXX) $(FLAGS) -c $< -o $@ -MMD -I.

$(NAME)	:	$(OBJS)
			$(CXX) $(FLAGS) $(OBJS) -o $@

clean	:
			$(RM) $(OBJS) $(D_FILES)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean
			$(MAKE)

.PHONY: all clean fclean re

-include $(D_FILES)
