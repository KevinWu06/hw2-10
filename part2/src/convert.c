#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int x;
    printf("Enter an integer : ");
    scanf("%d", &x);
    printf("\nsigned decimal   : %d\n", x);
    unsigned int y = (unsigned int) x;
    printf("unsigned decimal   : %u\n", y);
    printf("hexidecimal        : %x\n", x);
    int m;
    int binary[32];
    int i = 0;
    for(int i = 0; i < 32; i++){
        m = x;
        x = x >> 1;
        if (2*x = m) {
            binary[31 - i] = 0;
        }
        else{
            binary[31 - i] = 1;
        }
    }
    char ch;
    printf("binary             : ");
    for(int i = 0; i <8; i++) {
        for(int j = 0; j < 4; j++) {
            if(binary[4*i+j] == 1) {
                ch = '1';
            }
            else{
                ch = '0';
            }
            putc(ch, stdout);
        }
        if(i != 7){
            printf(" ");
        }
    }
    return EXIT_SUCCESS;
}
