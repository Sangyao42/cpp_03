NAME := main
CC := c++
CPPFLAGS := -std=c++98 -pedantic -Wall -Wextra -Werror
CPPFLAGS += -Wshadow -Wno-shadow

SRC_DIR := src
OBJ_DIR := obj
HEADER_DIR := include

SRCS := main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp
OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

all : $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CPPFLAGS) $(addprefix -I ,$(HEADER_DIR)) -c $^ -o $@

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

run :
	$(MAKE) all
	./$(NAME)

.phony: all clean fclean re run
