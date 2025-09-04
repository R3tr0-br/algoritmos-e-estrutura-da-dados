#include <stdio.h>
#include <string.h>
int main(void) {

    char alf [] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d \n", strlen(alf));


    char afl[10] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%lu", strlen(afl));
    printf("%lu", sizeof(afl));
}