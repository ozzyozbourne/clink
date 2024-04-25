.DEFAULT_GOAL := build

CC := clang
CFLAGS := -Wvarargs -Wall -Wextra -Werror -g -fPIC -shared
DYNAMIC_LIB_NAME := /Users/ozzy/lang/c/Clink/saga/libdynamiclib.dylib
C_STAN := c17

.PHONY: clean build 

clean: 
ifeq ($(wildcard $(DYNAMIC_LIB_NAME)),)
	@echo "$(DYNAMIC_LIB_NAME) not present"
else
	@rm $(DYNAMIC_LIB_NAME)
	@echo "$(DYNAMIC_LIB_NAME) deleted"
	@rm -rf $(DYNAMIC_LIB_NAME).dSYM
	@echo "$(DYNAMIC_LIB_NAME).dSYM deleted"
endif

build:
	$(CC) -std=$(C_STAN) $(CFLAGS) sharedlib.c -o $(DYNAMIC_LIB_NAME)
	@echo "Dynamic libary '$(DYNAMIC_LIB_NAME)' build successfully"
