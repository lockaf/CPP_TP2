#Compilation flags
CXXFLAGS= -g -Wall -Wextra -std=c++11 ${QT_INCLUDE}
#Linking flags
LDFLAGS=-pthread ${QT_DEPENDENCIES}
#Compiler
CXX=g++


executable: Date.o
	${CXX} $^ -o executable ${LDFLAGS}

Date.o: Date.cpp Date.hpp

clean: 
	rm -f format/*.o *.o executable *~ 

