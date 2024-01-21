
NAME 			= exec

SRC 			= \
					main.cpp \
					Warlock.cpp \
					ASpell.cpp \
					ATarget.cpp \
					Fwoosh.cpp \
					Dummy.cpp \

OBJ = $(SRC:.cpp=.o)

CC				= c++
RM				= rm -f
CFLAGS			= -Werror -Wextra -Wall -std=c++98

all:			$(NAME)

$(NAME): $(OBJ)
				$(CC) $(OBJ) -o $(NAME)

clean:
				$(RM) $(OBJ)

fclean:			clean
					$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
