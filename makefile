my_prog: main.o  
	gcc -o my_prog main.o  

main.o: main.cpp 
	gcc -c main.c
	
clean:
	rm my_prog main.o