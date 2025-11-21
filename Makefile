CC = gcc
CFLAGS = -Wall -Wextra -g

all: process_creation fork_wait output_program simple_program

process_creation: process_creation.c
	$(CC) $(CFLAGS) process_creation.c -o process_creation

fork_wait: fork_wait.c
	$(CC) $(CFLAGS) fork_wait.c -o fork_wait

output_program: file1.c file2.c
	$(CC) $(CFLAGS) file1.c file2.c -o output_program

simple_program: simple_program.c
	$(CC) $(CFLAGS) simple_program.c -o simple_program

.PHONY: clean
clean:
	rm -f process_creation fork_wait output_program simple_program *.o
