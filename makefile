CC = gcc
CFLAGS = -Wall 
TARGET = scanner 
OBJ = p1.o filter.o scanner.o testScanner.o fsaTable.o
SRC = p1.c filter.c scanner.c testScanner.c fsaTable.c

all: $(TARGET) 
	
$(TARGET):$(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	/bin/rm -f *.o $(TARGET) 
