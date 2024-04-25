.DEFAULT_GOAL := build

CC := clang
CFLAGS := -Wvarargs -Wall -Wextra -Werror -fPIC -g
INCLUDE_HEADERS = -I../lib -I../saga
LDFLAGS := -L../lib -L/Users/ozzy/lang/c/Clink/saga
LIBS := -lmylib -ldynamiclib
C_STAN := c17

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
	$(CC) -std=$(C_STAN) $(CFLAGS) main.c -o build/main $(INCLUDE_HEADERS) $(LDFLAGS) $(LIBS) 
	@echo "Executable 'main' created successfully in build directory"
