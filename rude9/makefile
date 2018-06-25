# File:    makefile
# Author:  Joseph Rude
# Program: prog9

# This makefile will compile and link the program producing an
# executable called prog9.

# macros
EXE=prog9
OBJECTS=main.o dateType.o personType.o
CFLAGS=
LFLAGS=

$(EXE):		$(OBJECTS)
		g++ -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp dateType.h personType.h
		g++ $(CFLAGS) -c main.cpp
		
dateType.o:	dateType.cpp dateType.h
		g++ $(CFLAGS) -c dateType.cpp
		
personType.o:	personType.cpp personType.h
		g++ $(CFLAGS) -c personType.cpp
		
clean:
		rm -rf $(OBJECTS) $(EXE) *~ 
