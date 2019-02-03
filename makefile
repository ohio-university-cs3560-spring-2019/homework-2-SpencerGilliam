COMP = g++

prog1: replace.a main.o
	$(COMP) -o prog1 main.o lib/replace.a

main.o: replace.a
	$(COMP) -c src/main.cpp 

replace.a: replace.o 
	ar rcs lib/replace.a replace.o

replace.o:
	$(COMP) -I ./include/replace.h -c src/replace.cpp

clean:
	rm *.o prog1