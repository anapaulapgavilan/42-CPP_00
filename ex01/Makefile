# Executable name
NAME        = PhoneBook

# Compiler and flags
CC          = c++
FLAGS       = -Wall -Wextra -Werror -std=c++98
RM          = rm -rf

# Source and header files
FILES       = main Contact PhoneBook
SRC         = $(FILES:=.cpp)          # Source files
OBJ         = $(FILES:=.o)            # Object files
HEADER      = Contact.hpp PhoneBook.hpp # Header files

# Colors for output
GREEN       = \e[92;5;118m
YELLOW      = \e[93;5;226m
GRAY        = \e[33;2;37m
RESET       = \e[0m

.PHONY: all clean fclean re

# Default target
all: $(NAME)

# Link executable from object files
$(NAME): $(OBJ)
	@printf "$(YELLOW) LINKING $(NAME)...$(RESET)\n"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN) DONE.$(RESET)\n"

# Rule to compile object files
%.o: %.cpp $(HEADER)
	@printf "$(GRAY) COMPILING $<...$(RESET)\n"
	@$(CC) $(FLAGS) -c $< -o $@

# Clean object files
clean:
	@$(RM) $(OBJ)
	@printf "$(YELLOW) OBJECT FILES REMOVED $(RESET)\n"

# Clean object files and executable
fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW) EXECUTABLE REMOVED $(RESET)\n"

# Rebuild everything
re: fclean all
