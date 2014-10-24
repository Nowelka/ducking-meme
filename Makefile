COMPILER	= g++

zdjecia: zdjecia.cpp
	$(COMPILER) zdjecia.cpp -o obrazy -Wall -std=c++11

clean:
	rm -f *.o *stackdump
