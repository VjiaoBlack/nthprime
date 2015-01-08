all: prime

clean:
	rm prime

prime: prime.c
	gcc -g prime.c -o prime
