all: linkedlist.o lldriver.o
	gcc -o lldriver linkedlist.o lldriver.o

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

lldriver.o: lldriver.c linkedlist.h
	gcc -c lldriver.c

run:
	./lldriver

clean:
	rm *.o
	rm lldriver
