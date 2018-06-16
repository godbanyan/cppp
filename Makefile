VPATH=src
SOURCE=computeBracketExpr.cc main.cc
CC_FLAG = -Iinclude -g -std=c++11
CC = g++

build:$(SOURCE)
	$(CC) $(CC_FLAG) $^

.PHONY: clean
clean:
	rd *.exe