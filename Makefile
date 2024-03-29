QueueDemo: main.o Queue.o test.o
	g++ -g -Wall -std=c++11 main.o Queue.o test.o -o QueueDemo

main.o: main.cpp test.cpp
	g++ -g -std=c++11 -c main.cpp

test.o: test.h test.cpp
	g++ -std=c++11 -g -Wall -c test.cpp

clean:
	rm main.o QueueDemo test.o
