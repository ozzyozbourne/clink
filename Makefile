.DEFAULT_GOAL := build

.PHONY: clean build

build: 
	$(MAKE) -C lib
	$(MAKE) -C saga
	$(MAKE) -C learn

clean: 
	$(MAKE) -C lib clean 
	$(MAKE) -C saga clean
	$(MAKE) -C learn clean 

