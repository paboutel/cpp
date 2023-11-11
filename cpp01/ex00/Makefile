# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paboutel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 17:52:19 by paboutel          #+#    #+#              #
#    Updated: 2022/05/11 17:52:21 by paboutel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


.DEFAULT_GOAL = all

NAME = test_zombie_class

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

VPATH =
DIR_SRC = srcs
DIR_OBJ = .obj

INCLUDE = -I./$(DIR_SRC)

SRC = $(wildcard $(DIR_SRC)/*.cpp)
OBJ = $(addprefix $(DIR_OBJ)/, $(notdir $(SRC:.cpp=.o)))

mkdir_DIR_OBJ:
	mkdir -p $(DIR_OBJ)

$(DIR_OBJ)/%.o : $(DIR_SRC)/%.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $< $(INCLUDE)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all: mkdir_DIR_OBJ $(OBJ) $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -rf $(DIR_OBJ)

re: fclean all

.PHONY: all clean fclean re