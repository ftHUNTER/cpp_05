NAME = bureaucrat
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
RM = rm -f
SRC = main.cpp Bureaucrat.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
