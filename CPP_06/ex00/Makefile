# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 14:07:09 by lhanna            #+#    #+#              #
#    Updated: 2022/11/07 14:07:11 by lhanna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
CXX = clang++
RM = rm -f
FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Conversion.cpp
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