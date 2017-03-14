CFLAGS = -Wall -g -pedantic

main: main.o list.o graph.o
	gcc -o main main.o list.o graph.o


list.o: list.c list.h
	gcc $(CFLAGS) -c list.c

main.o: main.c list.h
	gcc $(CFLAGS) -c main.c

graph.o: graph.c list.h graph.h
	gcc $(CFLAGS) -c graph.c

clean:
	rm -f *.o main
