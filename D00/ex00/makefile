NAME = megaphone.out

CFLAGS += -Wextra -Wall -std=c++98

ATTACH = 

C = clang++

HEADERS = includes

DIR_S = ./

DIR_O = obj

SOURCES =  megaphone.cpp

SRCS = $(addprefix $(DIR_S)/,$(SOURCES))
OBJECTS = $(addprefix $(DIR_O)/,$(SOURCES:.cpp=.o))

$(DIR_O)/%.o:		$(DIR_S)/%.cpp
	@echo "\033[1;35;m[Compiling $<] \t\033[0m"
	@$(C) $(CFLAGS) -c -o $@ $<

$(NAME): temporary $(OBJECTS)
	@echo "\033[1;34;m[Making... Pizza]\033[0m"
	$(C) $(CFLAGS) -o $(NAME) $(OBJECTS) $(ATTACH)

all: temporary $(NAME)

temporary:
	@mkdir -p $(DIR_O)

clean:
	@echo "\033[1;33;m[Cleaning]\033[0m"
	@rm -rf $(OBJECTS)

fclean: clean
	@echo "\033[1;32;m[Force Cleaning]\033[0m"
	@rm -rf $(NAME)
	@rm -rf $(DIR_O)

re: fclean clean all
	@echo "\033[1;31;m[Recompiled]\033[0m"

run: re
	make clean
	./$(NAME) $(FILE)

.PHONY: fclean clean all re