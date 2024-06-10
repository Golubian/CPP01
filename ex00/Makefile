# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 16:20:13 by gachalif          #+#    #+#              #
#    Updated: 2024/06/07 16:20:13 by gachalif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CC = g++
FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
SRCS = Zombie.cpp \
newZombie.cpp \
randomChump.cpp \
main.cpp \

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:		fclean all

.PHONY: all clean fclean re