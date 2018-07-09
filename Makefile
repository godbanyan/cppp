VPATH=src
CC_FLAG = -I.. -g -std=c++11
CC = g++

TARGET=$(sort $(basename $(wildcard *.cc)))

build:$(TARGET)

%: %.cc
	$(CC) $(CC_FLAG) $< -o $@.exe

.PHONY: clean
clean:
	rm -f *.exe *.log