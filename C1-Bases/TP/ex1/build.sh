#!/bin/sh
gcc ./main.c ./liba/a.c ./libb/b.c -I./liba -I./libb/ -o test
