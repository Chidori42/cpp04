CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =	main.cpp\
		Animal.cpp\
		Dog.cpp\
		Cat.cpp
		

NAME = Animal

OBJECTS = $(SRCS:.cpp=.o)

RM = rm -f

all: $(NAME)

%.o: %.cpp DiamondTrap.hpp Dog.hpp Cat.hpp 
	c++ $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
	c++ $(CFLAGS) -o $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all