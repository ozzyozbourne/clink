.DEFAULT_GOAL := build

CC := clang
CFLAGS := -Wvarargs -Wall -Wextra -Werror -fdeclspec -fPIC -g
INCLUDE_HEADERS = -I../lib -I../saga
LDFLAGS := -L../lib -L/Users/ozzy/lang/c/Clink/saga
LIBS := -lmylib -ldynamiclib
C_STAN := c17
# The executable_path just need to go the @rpath location and dyld will add the rest as present the @rpath 
# here the dynamic library is at @rpath/saga/libdynamiclib.dylib
# do the @executable_path just need to go to the @rpath the dynamic linker will add the rest 
# here the @rpath is ../../ ie executable_path need to go two directory up and the dynamic linker will add the rest 
R_PATH := -Wl,-rpath,'@executable_path/../..'  

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
	$(CC) -std=$(C_STAN) $(CFLAGS) main.c -o build/main $(INCLUDE_HEADERS) $(LDFLAGS) $(LIBS) $(R_PATH)
	@echo "Executable 'main' created successfully in build directory"
