.DEFAULT_GOAL := build

CC := clang
CFLAGS := -Wall -Wextra -Werror
INCLUDE_HEADERS = -I../lib
LDFLAGS := -L../lib
LIBS := -lmylib

.PHONY: clean build 

clean: 
ifeq ($(wildcard build), )
	@echo "Build dir not present"
else
	@rm -rf build
	@echo "Build dir deleted"
endif

build:
ifeq ($(wildcard build), )
	@mkdir build
	@echo "Build directory created"
else
	@echo "Build directory present"
endif
	$(CC) $(CFLAGS) main.c -o build/main $(INCLUDE_HEADERS) $(LDFLAGS) $(LIBS)
	@echo "Executable 'main' created successfully in build directory"
