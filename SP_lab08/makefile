short: main.o sort.o swap.o error.o wrt.o
	gcc -o short main.o sort.o swap.o error.o wrt.o
main.o: main.c
	gcc -c main.c
sort.o: sort.c
	gcc -c sort.c
swap.o: swap.c
	gcc -c swap.c
wrt.o: wrt.c
	gcc -c wrt.c
clean:
	rm *.o short