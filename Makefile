CXX = g++
CXXFLAGS = -std=c++17

prog: main.cpp _vector.o
	$(CXX) $(CXXFLAGS) $< _vector.o -o $@

vector.o: _vector.h _vector.cpp
	$(CXX) $(CXXFLAGS) $< -c -o $@

clean:
	rm -f *.o