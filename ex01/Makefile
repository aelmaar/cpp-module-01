CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = $(wildcard *.cpp)

OBJ_DIR = ../obj

OBJS = $(addprefix $(OBJ_DIR)/ex01/, $(SRCS:.cpp=.o))

RM = rm -rf

NAME = zombiehorde

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_DIR)/ex01/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ_DIR)/ex01

fclean: clean
	$(RM) $(OBJ_DIR) $(NAME)

re: fclean all

.PHONY: all re clean fclean
