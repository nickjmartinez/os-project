CC = gcc
CFlags = -c -std=c99
hex = hexdump -C 
diskName = virtualdiskC3_C1

outputName = myshell

all: program

program: clean filesys.o shell.o
	$(CC) -o $(outputName) shell.o filesys.o

filesys.o: filesys.c filesys.h
	$(CC) $(CFlags) filesys.c

shell.o: shell.c
	$(CC) $(CFlags) shell.c

clean: 
	rm -f myshell
	rm -f *.o

cleandisk:
	rm -f virtualdisk*

hex: cleandisk run
	$(hex) $(diskName)	

run: program
	./$(outputName)
