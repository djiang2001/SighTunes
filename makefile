all:main.o array.o tunesll.o
	gcc main.o tunesll.o array.o

main.o: main.c tunesll.h array.h
	gcc -c main.c

tunesll.o: tunesll.c tunesll.h
	gcc -c tunesll.c

array.o: array.c array.h
	gcc -c array.c

run:
	./a.out

clean:
	rm *.o
