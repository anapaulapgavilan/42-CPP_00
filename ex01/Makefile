NAME        = PhoneBook

CC          = c++
FLAGS       = -Wall -Wextra -Werror -std=c++98
RM          = rm -rf

FILES       = main Contact PhoneBook
SRC         = $(FILES:=.cpp)
OBJ         = $(FILES:=.o)
HEADER      = Contact.hpp PhoneBook.hpp

GREEN       = \e[92;5;118m
YELLOW      = \e[93;5;226m
GRAY        = \e[33;2;37m
RESET       = \e[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@printf "$(YELLOW) LINKING $(NAME)...$(RESET)\n"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN) DONE.$(RESET)\n"

%.o: %.cpp $(HEADER)
	@printf "$(GRAY) COMPILING $<...$(RESET)\n"
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@printf "$(YELLOW) OBJECT FILES REMOVED $(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW) EXECUTABLE REMOVED $(RESET)\n"

re: fclean all
