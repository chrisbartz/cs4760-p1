all: my_prog my_prog1 my_prog2 my_prog3 my_prog4 my_prog5 my_prog6 my_prog7 my_prog8  

my_prog: main.o  
	gcc -o my_prog main.o  

main.o: main.c 
	gcc -c -std=gnu99 main.c


my_prog1: main1.o  
	gcc -o my_prog1 main1.o  

main1.o: main1.c 
	gcc -c -std=gnu99 main1.c	


my_prog2: main2.o  
	gcc -o my_prog2 main2.o  

main2.o: main2.c 
	gcc -c -std=gnu99 main2.c
	

my_prog3: main3.o  
	gcc -o my_prog3 main3.o  

main3.o: main3.c 
	gcc -c -std=gnu99 main3.c	
	

my_prog4: main4.o  
	gcc -o my_prog1 main1.o  

main4.o: main4.c 
	gcc -c -std=gnu99 main4.c	


my_prog5: main5.o  
	gcc -o my_prog5 main5.o  

main5.o: main5.c 
	gcc -c -std=gnu99 main5.c	


my_prog6: main6.o  
	gcc -o my_prog6 main6.o  

main6.o: main6.c 
	gcc -c -std=gnu99 main6.c	


my_prog7: main7.o  
	gcc -o my_prog7 main7.o  

main7.o: main7.c 
	gcc -c -std=gnu99 main7.c	


my_prog8: main8.o  
	gcc -o my_prog8 main8.o  

main1.o: main8.c 
	gcc -c -std=gnu99 main8.c	


clean:
	rm my_prog* *.o