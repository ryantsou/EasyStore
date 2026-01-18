CXX = g++
CXXFLAGS = -Wall -g -std=c++17

all: ${TARGET}

${TARGET}: main.cpp client .cpp magasin.cpp order.cpp produit.cpp
	${CXX} ${CXXFLAGS} main.cpp -o ${TARGET}
clean:
	rm -f ${TARGET}
.PHONY: all clean