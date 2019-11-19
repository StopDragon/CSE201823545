p_r_s: main.o report.o compare.o prn.o selection.o
	gcc -o p_r_s main.o report.o compare.o prn.o selection.o
main.o: main.c
	gcc -c main.c
report.o: report.c
	gcc -c report.c
compare.o: compare.c
	gcc -c compare.c
prn.o: prn.c
	gcc -c prn.c
selection.o: selection.c
	gcc -c selection.c
clean:
	rm *.o p_r_s