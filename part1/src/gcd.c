#include <stdio.h>
#include <stdlib.h>
#include "iterative.h"
#include "recursive.h"

int main(int argc, char **argv) {
   	if(argc != 3){
		fprintf(stderr, "Usage: ./gcd <integer m> <integer n>\n");
		return EXIt_FAILURE;
	}
	int n = atoi(argv[1]), m = atoi(argv[2]);
	if(n == 0 && m == 0){
		printf("gcd(0, 0) = undefined\n");
	}
    return EXIT_SUCCESS;
}
