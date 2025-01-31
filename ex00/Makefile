NAME    = megaphone

CC      = c++
FLAGS   = -Wall -Wextra -Werror -std=c++98
RM      = rm -rf

SRC     = megaphone.cpp
OBJ     = $(SRC:.cpp=.o)

GREEN   = \e[92;5;118m
YELLOW  = \e[93;5;226m
GRAY    = \e[33;2;37m
RESET   = \e[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@printf "$(YELLOW) COMPILING $(NAME)... $(RESET)\n"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN) DONE \n$(RESET)"

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@printf "$(GRAY) OBJECT FILES REMOVED $(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(GRAY) EXECUTABLE REMOVED $(RESET)\n"

re: fclean all
