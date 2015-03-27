CXX= g++
CXXFLAGS = -Wall -Wextra -O3
SDL = `sdl2-config --cflags --libs`
SRC = *.cpp

default:
	$(CXX) $(CXXFLAGS) $(SRC) $(SDL) -o myGo
clean:
	rm -rf *.o myGo *~
.PHONY:
	clean
