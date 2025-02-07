#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int x;
    printf("Enter an integer : ");
    scanf("%d", &x);
    printf("\nsigned decimal   : %d\n", x);
    unsigned int y = (unsigned int) x;
    printf("unsigned decimal : %u\n", y);
    printf("hexidecimal      : %x\n", x);
    int binary[32];
    for(int i = 0; i < 32; i++){
        if(x & (1 << i)){
            binary[31 - i] = 1;
        }
        else{
            binary[31 - i] = 0;
        }
    }
    char ch;
    printf("binary           : ");
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
            putc(' ', stdout);
        }
        else{
            putc('\n', stdout);
        }
    }
    return EXIT_SUCCESS;
}
