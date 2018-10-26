CC = gcc
CFlags = -c -std=c99

outputName = myshell

all: myshell

myshell: filesys.o shell.o
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
