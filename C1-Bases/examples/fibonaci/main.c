#include <stdio.h>

#include "utils.h"
 
// Prototype de la fonction Fibonacci définie dans util.c
int fibonacci(int n);
 
int main() {

    
	int n = 10; // Exemple : Calculer le 10ème terme de la suite de Fibonacci
    int result = fibonacci(n);
    printf("Le %dème terme de la suite de Fibonacci est : %d\n", n, result);
    return 0;
}
 
 
