main: main.cpp conv.o fromhextodec.o binary.o hexdec.o
	g++ --std=c++11 main.cpp conv.o fromhextodec.o binary.o hexdec.o -o main

conv.o: conv.cpp
	g++ --std=c++11 -c conv.cpp 

fromhextodec.o: fromhextodec.cpp
	g++ --std=c++11 -c fromhextodec.cpp 

binary.o: binary.cpp
	g++ --std=c++11 -c binary.cpp

hexdec.o: hexdec.cpp
	g++ --std=c++11 -c hexdec.cpp

clean:
	rm -f *.o *.S main
