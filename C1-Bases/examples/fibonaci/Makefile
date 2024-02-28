


CC=gcc


all: fibo


libutils.so: utils.c
	$(CC) -shared -fpic utils.c -o $@


fibo: main.c libutils.so
	$(CC) main.c -o $@ -L. -lutils -Wl,-rpath=$(PWD)


