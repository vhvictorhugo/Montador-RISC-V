#Nome do programa
TARGET = tp02

#compilador
CC = gcc

OBJS = main.o instrucoes.o

all: $(OBJS)
	$(CC) obj/*.o -o bin/$(TARGET)

main.o: main.c
	$(CC) -c main.c -o obj/main.o

instrucoes.o: src/instrucoes.c
	$(CC) -c src/instrucoes.c -o obj/instrucoes.o

run:
	bin/$(TARGET)

clean:
	rm obj/*.o
	rm bin/*