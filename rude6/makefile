# File:    makefile
# Author:  Joseph Rude
# Program: prog6

# This makefile will compile and link the program producing an
# executable called prog6.

# macros
EXE=prog6
OBJECTS=main.o average.o grade.o median.o outputScores.o outputSummary.o read.o sort.o stddev.o
CFLAGS=-Wall
LFLAGS=

$(EXE):		$(OBJECTS)
		g++ -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp constants.h
		g++ $(CFLAGS) -c main.cpp
		
grade.o:	grade.cpp
		g++ $(CFLAGS) -c grade.cpp
		
stddev.o:	stddev.cpp
		g++ $(CFLAGS) -c stddev.cpp
		
median.o:	median.cpp
		g++ $(CFLAGS) -c median.cpp
		
average.o:	average.cpp
		g++ $(CFLAGS) -c average.cpp

read.o:		read.cpp constants.h
		g++ $(CFLAGS) -c read.cpp

sort.o:		sort.cpp
		g++ $(CFLAGS) -c sort.cpp
		
outputScores.o:		outputScores.cpp
		g++ $(CFLAGS) -c outputScores.cpp

outputSummary.o:	outputSummary.cpp
		g++ $(CFLAGS) -c outputSummary.cpp

clean:
		rm -rf $(OBJECTS) $(EXE) *~ 
