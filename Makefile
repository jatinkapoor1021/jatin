main: main.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o caesar.o vigenere.o decrypt.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

tests: tests.o caesar.o vigenere.o decrypt.o
	g++ -o tests tests.o caesar.o vigenere.o decrypt.o

test-ascii.o: test-ascii.cpp 

main.o: main.cpp  

caesar.o: caesar.cpp caeser.h

tests.o: tests.cpp doctest.h
	g++ -c -std=c++11 tests.cpp

vigenere.o: vigenere.cpp vigenere.h

decrypt.o: decrypt.cpp decrypt.h

clean:
	rm -f *.o main a.out