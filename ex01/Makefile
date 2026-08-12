
NAME = phonebook

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC = src/contacts.cpp src/phonebook.cpp src/main.cpp 
OBJ = $(SRC:.cpp=.o)

HEADEARS = include/phonebook.hpp include/contacts.cpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Makefile $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re