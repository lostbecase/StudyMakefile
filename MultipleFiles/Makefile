Alice.o:Alice.cpp
	g++ $^ -c -o $@
Bob.o:Bob.cpp
	g++ $^ -c -o $@
main.o:main.cpp
	g++ $^ -c -o $@

.PHONY:clean
clean:
	rm *.o
	rm main

.PHONY:all
all:main.o Bob.o Alice.o
	g++ $^ -o main