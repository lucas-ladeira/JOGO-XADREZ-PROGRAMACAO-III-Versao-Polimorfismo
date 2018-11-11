
TARGET = a.out
CXX = g++
CXXFLAGS = 
DEPS = $(wildcard *.h)
OBJS = $(patsubst %.cpp, %.o, $(wildcard *.cpp))

.PHONY: all
all: compile

%.o: %.cpp $(DEPS)
	$(CXX) -c $< $(CXXFLAGS)

$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $^ $(CXXFLAGS)

.PHONY: compile
compile: $(TARGET)

.PHONY: run
run: compile
	./$(TARGET)

.PHONY: clean
clean:
	rm *.o $(TARGET)

