main: main.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o caesar.o vigenere.o decrypt.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

tests: tests.o caesar.o vigenere.o decrypt.o
	g++ -o tests tests.o caesar.o vigenere.o decrypt.o


main.o: main.cpp caesar.h

caesar.o: caesar.cpp caesar.h

decrypt.o: decrypt.cpp decrypt.h

test-ascii.o: test-ascii.cpp

vigenere.o: vigenere.cpp vigenere.h

tests.o: tests.cpp doctest.h caesar.h decrypt.h vigenere.h

clean:
	rm -f main.o caesar.o test-ascii.o tests.o vigenere.o decrypt.o