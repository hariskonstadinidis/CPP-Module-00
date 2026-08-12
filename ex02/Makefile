NAME = Account

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = src/tests.cpp src/Account.cpp
OBJ = $(SRC:.cpp=.o)

HEADERS = include/Account.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Makefile $(HEADEARS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re