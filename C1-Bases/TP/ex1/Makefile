





CC=gcc

LDFLAGS=-Wl,-rpath=$(PWD)

all: main


main: main.c liba.so libb.so
	$(CC) $< -o $@ -L. -I./liba/ -I./libb/ -la -lb $(LDFLAGS) 

libb.so: ./libb/b.c
	$(CC) -shared -fpic $^ -o $@

liba.so: ./liba/a.c
	$(CC) -shared -fpic $^ -o $@
