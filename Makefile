CXX=g++
CC=gcc
SOURCES=lightplanet.cpp main.cpp star.cpp planet.cpp solarsystem.cpp
OBJS=lightplanet.o main.o star.o planet.o solarsystem.o

CXXFLAGS=-g
INCLUDES=
LIBS=-lGL -lGLU -lglut

TARGET=solar

all: $(OBJS)
	$(CXX) $(OBJS) $(LIBS) -o $(TARGET)

lightplanet.o: lightplanet.cpp lightplanet.h star.h planet.h
	$(CXX) -c lightplanet.cpp $(CXXFLAGS) $(INCLUDES) -o $@

star.o: star.cpp star.h
	$(CXX) -c star.cpp $(CXXFLAGS) $(INCLUDES)  -o $@

planet.o: planet.cpp star.h planet.h
	$(CXX) -c planet.cpp $(CXXFLAGS) $(INCLUDES) -o $@

solarsystem.o: solarsystem.cpp solarsystem.h star.h planet.h lightplanet.h
	$(CXX) -c solarsystem.cpp $(CXXFLAGS) $(INCLUDES) -o $@

main.o: solarsystem.h star.h planet.h lightplanet.h
	$(CXX) -c main.cpp $(CXXFLAGS) $(INCLUDES) -o $@

clean:
	rm -rf $(OBJS)
	rm -rf solar
