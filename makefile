./main.exe : main.o hotel.o
			gcc main.o hotel.o -o main.exe
main.o : main.c  hotel.h
			gcc -c main.c
hotel.o : hotel.c hotel.h
			gcc -c hotel.c