my_prog: main.o  
	gcc -o my_prog main.o  

main.o: main.c 
	gcc -c -std=gnu99 main.c
	
clean:
	rm my_prog *.o