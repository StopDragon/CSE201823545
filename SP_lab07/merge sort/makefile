margesort: p_r_s.h merge.o mergesorta.o wrt.o main.o
	gcc -o mergesort merge.o mergesorta.o wrt.o main.o
merge.o: merge.c
	gcc -c merge.c
mergesorta.o: mergesorta.c
	gcc -c mergesorta.c
wrt.o: wrt.c
	gcc -c wrt.c
main.o: main.c
	gcc -c main.c
clean:
	rm *.o margesort