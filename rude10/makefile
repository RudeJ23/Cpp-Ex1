# File:    makefile
# Author:  Joseph Rude
# Program: prog10

# This makefile will compile and link the program producing an
# executable called prog10.

# macros
EXE=prog10
OBJECTS=main.o dateType.o personType.o studentType.o read.o output.o
CFLAGS=
LFLAGS=

$(EXE):		$(OBJECTS)
		g++ -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp dateType.h personType.h studentType.o
		g++ $(CFLAGS) -c main.cpp
		
dateType.o:	dateType.cpp dateType.h
		g++ $(CFLAGS) -c dateType.cpp
		
personType.o:	personType.cpp personType.h
		g++ $(CFLAGS) -c personType.cpp
		
studentType.o:	studentType.cpp studentType.h
		g++ $(CFLAGS) -c studentType.cpp
		
read.o:		read.cpp  studentType.h
		$(CC) $(CFLAGS) -c read.cpp
		
output.o:	output.cpp studentType.h
		$(CC) $(CFLAGS) -c output.cpp
		
clean:
		rm -rf $(OBJECTS) $(EXE) *~ 
