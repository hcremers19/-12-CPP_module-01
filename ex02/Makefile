# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/10 16:19:04 by hcremers          #+#    #+#              #
#    Updated: 2022/08/30 13:59:42 by hcremers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	HITHISISBRAIN

FLAGS =	-Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp		\

# ----- #

all:		$(NAME)

$(NAME):
			c++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
			rm -rf $(NAME)

re:			clean all