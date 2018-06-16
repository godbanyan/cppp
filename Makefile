VPATH=src
CC_FLAG = -Iinclude -g -std=c++11
CC = g++

build:$(target)

%: %.cc
	$(CC) $(CC_FLAG) $< -o $@.exe

.PHONY: clean
clean:
	rm *.exe