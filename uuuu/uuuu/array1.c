#include <stdio.h>
int main(void) {
    
    int meuArray[] = {15, 52, 59, 70};
    meuArray[0] = 33;
    printf("%i", meuArray[0]);
    
    char palavra[10] = {'d', 'i', 'a', '\0', 'o', 'i',};
    printf("%s", palavra);
}

// \0 indica o fim de uma string