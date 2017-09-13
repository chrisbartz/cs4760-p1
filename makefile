CC			= gcc 
OBJ			= main.o main1.o main2.o main3.o main4.o main5.o main6.o main7.o main8.o 
PROGRAM		= my_prog my_prog1 my_prog2 my_prog3 my_prog4 my_prog5 my_prog6 my_prog7 my_prog8

all: $(OBJ)
	$(CC) -o $(PROGRAM) $(OBJ)

%.o: %.c 
	$(CC) -c -std=gnu99 $<

clean:
	rm my_prog* *.o