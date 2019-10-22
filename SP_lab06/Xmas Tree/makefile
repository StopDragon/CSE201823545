xmastree: main.o random.o clrscr.o randleaf.o
	gcc -o xmasstree main.o random.o clrscr.o randleaf.o
randleaf.o: randleaf.c
	gcc -c randleaf.c
clrscr.o: clrscr.c
	gcc -c clrscr.c
random.o: random.o
	gcc -c random.c
main.o: main.c
	gcc -c main.c
clean:
	rm *.o xmastree