NAME = convert
CC = c++
FLAGS = -Wall -Wextra -Werror -g

SRC = Base.cpp	main.cpp
OBJ = $(SRC:.cpp=.o)

# Colors
COLOR_RESET = \033[0m
COLOR_PURPLE = \033[35m
COLOR_CYAN = \033[36m
COLOR_GREEN = \033[32m
COLOR_YELLOW = \033[33m

# Compile each .cpp -> .o with animation
%.o: %.cpp
	@echo -e "Step 1: Compile $< -> $@"
	@echo -e "[Compiling] $< [${COLOR_PURPLE}■□□□□□□□□□${COLOR_RESET}] 10%"; sleep 0.1
	@echo -e "[Compiling] $< [${COLOR_PURPLE}■■■□□□□□□□${COLOR_RESET}] 30%"; sleep 0.1
	@echo -e "[Compiling] $< [${COLOR_PURPLE}■■■■■■□□□□${COLOR_RESET}] 60%"; sleep 0.1
	@echo -e "[Compiling] $< [${COLOR_PURPLE}■■■■■■■■■□${COLOR_RESET}] 90%"; sleep 0.1
	@echo -e "[Compiling] $< [${COLOR_PURPLE}■■■■■■■■■■${COLOR_RESET}] 100% ✅"; sleep 0.1
	$(CC) $(FLAGS) -c $< -o $@

# Default target
all: $(NAME)

# Link all object files
$(NAME): $(OBJ)
	@echo -e "Step 3: Link objects -> $(NAME)"
	@echo -e "[Linking] $(OBJ) [${COLOR_CYAN}■□□□□□□□□□${COLOR_RESET}] 10%"; sleep 0.1
	@echo -e "[Linking] $(OBJ) [${COLOR_CYAN}■■■□□□□□□□${COLOR_RESET}] 30%"; sleep 0.1
	@echo -e "[Linking] $(OBJ) [${COLOR_CYAN}■■■■■■□□□□${COLOR_RESET}] 60%"; sleep 0.1
	@echo -e "[Linking] $(OBJ) [${COLOR_CYAN}■■■■■■■■■□${COLOR_RESET}] 90%"; sleep 0.1
	@echo -e "[Linking] $(OBJ) [${COLOR_CYAN}■■■■■■■■■■${COLOR_RESET}] 100% ✅"; sleep 0.1
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo -e "${COLOR_GREEN}Build complete! 🎉${COLOR_RESET}"

clean:
	@echo -e "${COLOR_YELLOW}Cleaning object files...${COLOR_RESET}"
	@rm -f $(OBJ)
	@echo -e "${COLOR_YELLOW}Object files removed 🧹${COLOR_RESET}"

fclean: clean
	@echo -e "${COLOR_YELLOW}Removing executable...${COLOR_RESET}"
	@rm -f $(NAME)
	@echo -e "${COLOR_YELLOW}Executable removed 🗑️${COLOR_RESET}"

re: fclean all

.PHONY: all clean fclean re
