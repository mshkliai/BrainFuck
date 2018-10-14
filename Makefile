NAME = mindopen

CLASS = CloseCicle.cpp DecrCell.cpp Enter.cpp IncrCell.cpp Mindopen.cpp NextCell.cpp \
	OpenCicle.cpp Parser.cpp PrevCell.cpp Putchar.cpp

SRC = main.cpp

S_CLASS = $(addprefix ./Classes/, $(CLASS))

S_SRC = $(addprefix ./SRC/, $(SRC))

OBJ = $(S_SRC:.cpp=.o) $(S_CLASS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

END = \033[0m

GREEN = \033[0;32m

RED = \033[0;31m

ARR = \033[1;34m

YELLOW = \033[1;33m

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(FLAGS) $(OBJ) -lncurses -o $@ && \
	echo "\n$(YELLOW)Brainf**k compiled, good luck ;)$(END)"

$(OBJ): %.o: %.cpp
	@clang++ $(FLAGS) -c $< -o $@ && \
	echo "$(GREEN)$<$(ARR) -> $(RED)$@$(END)$(END)$(END)"

clean:
	@rm -f $(OBJ) && echo "\033[0;35mobjective files removed$(END)"

fclean: clean
	@rm -f $(NAME) && echo "\033[1;31mBrainf**k deleted$(END)"

re: fclean all

.PHONY: all clean fclean all
