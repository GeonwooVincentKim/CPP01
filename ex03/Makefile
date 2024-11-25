# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/22 22:45:55 by geonwkim          #+#    #+#              #
#    Updated: 2024/11/25 22:42:07 by geonwkim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:.cpp=.o)
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98

all: $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
