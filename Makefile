.DEFAULT_GOAL := build

.PHONY: clean build

build: 
	$(MAKE) -C lib
	$(MAKE) -C learn

clean: 
	$(MAKE) -C lib clean 
	$(MAKE) -C learn clean 

