all: phase

phase: phase.o
	gcc -o phase phase.o

phase.o: phase.c
	gcc -c phase.c

clean:
	rm phase phase.o
