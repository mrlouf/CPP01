# -=-=-=-=-    NAME -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= #

NAME 		= SedIsForLosers

# -=-=-=-=-    FLAG -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= #

CC			= c++
FLAGS		= -Werror -Wall -Wextra -pedantic -std=c++98 -fsanitize=address -fsanitize=leak

# -=-=-=-=-    PATH -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

RM			= rm -fr

# -=-=-=-=-    FILES -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

SRC 		= 	main.cpp

OBJDIR		= .obj
OBJS		= $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

# -=-=-=-=-    TARGETS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

all: $(NAME)

$(OBJDIR)/%.o: %.cpp Makefile
	@mkdir -p $(@D)
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean: 
	@$(RM) $(OBJDIR)

fclean: clean
	@$(RM) $(NAME) test.txt test.txt.replace

re: fclean all

.PHONY: all clean fclean re