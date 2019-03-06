#Compilation flags
CXXFLAGS= -g -Wall -Wextra -std=c++11 ${QT_INCLUDE}
#Linking flags
LDFLAGS=-pthread ${QT_DEPENDENCIES}
#Compiler
CXX=g++


executable: Date.o main.o person.o
	${CXX} $^ -o executable ${LDFLAGS}


Date.o: Date.cpp  Date.hpp

main.o: main.cpp Date.hpp

person.o: person.cpp person.hpp Date.hpp

clean: 
	rm -f format/*.o *.o executable *~ 

