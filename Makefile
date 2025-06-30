# Makefile

CXX = g++
CXXFLAGS = -g -Wall
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
TARGET = Metodo

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)
