.DEFAULT_GOAL := build

CC := clang
CFLAGS := -Wall -Wextra -Werror
OBJ_NAME := mylib.o
STATIC_LIB_NAME = libmylib.a

.PHONY: clean compile build 

clean: 
ifeq ($(wildcard libmylib.a),)
	@echo "libmylib.a not present"
else
	@rm libmylib.a
	@echo "libmylib.a deleted"
endif

compile:
	$(CC) $(CFLAGS) -c lib.c -o $(OBJ_NAME)

build: compile
	ar rcs $(STATIC_LIB_NAME) $(OBJ_NAME)
	@echo "Static libary 'libmylib.a' build successfully"
