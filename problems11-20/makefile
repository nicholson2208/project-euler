cppo = prob12.o
objects = $(cppo)
sources= $(objects:.o=.cpp)
Output=Probs
CXX = g++
CXXFLAGS = -std=c++0x

all: $(Output)

$(Output) : $(objects)
	$(CXX) $^ -o $@

clean:
	-rm $(Output) $(objects)
.PHONY : clean
