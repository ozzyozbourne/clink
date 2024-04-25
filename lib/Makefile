.DEFAULT_GOAL := build

CC := clang
CFLAGS := -Wvarargs -Wall -Wextra -Werror -g
OBJ_NAME := mylib.o
STATIC_LIB_NAME = libmylib.a
C_STAN := c17

.PHONY: clean compile build 

clean: 
ifeq ($(wildcard $(STATIC_LIB_NAME)),)
	@echo "$(STATIC_LIB_NAME) not present"
else
	@rm $(STATIC_LIB_NAME)
	@echo "$(STATIC_LIB_NAME) deleted"
endif

compile:
	$(CC) -std=$(C_STAN) $(CFLAGS) -c lib.c -o $(OBJ_NAME)

build: compile
	ar rcs $(STATIC_LIB_NAME) $(OBJ_NAME)
	@echo "Static libary '$(STATIC_LIB_NAME)' build successfully"
