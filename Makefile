VPATH=src
CC_FLAG = -I.. -g -std=c++11
CC = g++

SRC=$(wildcard *.cc)
TARGET=$(sort $(SRC:.cc=.exe))

build:$(TARGET)

%.exe: %.cc
	$(CC) $(CC_FLAG) $< -o $@

.PHONY: clean
clean:
	rm -f *.exe *.log