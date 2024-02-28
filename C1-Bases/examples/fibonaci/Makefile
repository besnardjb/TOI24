


CC=gcc
CFLAGS=-O3

all: fibo


libutils.so: utils.c
	$(CC) $(CFLAGS) -shared -fpic utils.c -o libutils.so


fibo: main.c libutils.so
	$(CC) $(CFLAGS)  main.c -o fibo -L. -lutils -Wl,-rpath=$(PWD)
	@echo "COUCOU"

clean:
	rm -fr fibo libutils.so

