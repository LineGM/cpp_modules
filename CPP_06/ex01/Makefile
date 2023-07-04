# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 11:40:42 by ldurante          #+#    #+#              #
#    Updated: 2022/11/07 15:06:38 by lhanna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialize
CXX = clang++
RM = rm -f
FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Data.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re