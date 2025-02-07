#include <stdio.h>
#include <stdlib.h>
#include "iterative.h"
#include "recursive.h"

int main(int argc, char **argv) {
   	if(argc != 3){
		fprintf(stderr, "Usage: ./gcd <integer m> <integer n>\n");
		return EXIT_FAILURE;
	}
	int n = atoi(argv[1]), m = atoi(argv[2]);
	if(n == 0 && m == 0){
		printf("gcd(0, 0) = undefined\n");
	} else {
        printf("Iterative: gcd(%d, %d) = %d\n", n, m, gcd_iterative(m, n));
        printf("Recursive: gcd(%d, %d) = %d\n", n, m, gcd_recursive(m, n));
    }
    return EXIT_SUCCESS;
}
