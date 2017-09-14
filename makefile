all: my_prog my_prog1 my_prog2 my_prog3 my_prog4 my_prog5 my_prog6 my_prog7 my_prog8  

%.o: %.c 
	$(CC) -c -std=gnu99 $<

my_prog: main.o  
	gcc -o my_prog main.o  

my_prog1: main1.o  
	gcc -o my_prog1 main1.o  

my_prog2: main2.o  
	gcc -o my_prog2 main2.o  

my_prog3: main3.o  
	gcc -o my_prog3 main3.o  

my_prog4: main4.o  
	gcc -o my_prog4 main4.o  

my_prog5: main5.o  
	gcc -o my_prog5 main5.o  

my_prog6: main6.o  
	gcc -o my_prog6 main6.o  

my_prog7: main7.o  
	gcc -o my_prog7 main7.o  

my_prog8: main8.o  
	gcc -o my_prog8 main8.o  


clean:
	rm my_prog* *.o