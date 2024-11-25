# Variables
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
NAME    = do-op
SRC     = main.c ft_func.c func.c
OBJ     = $(SRC:.c=.o)
RM      = rm -f

# Default rule
all: $(NAME)

# Linking
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Compilation
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	$(RM) $(OBJ)

# Full clean (object files + executable)
fclean: clean
	$(RM) $(NAME)

# Rebuild everything
re: fclean all
