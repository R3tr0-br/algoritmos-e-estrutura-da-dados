#include <stdio.h>
int main(void) {

    int array1d[] = {15, 52, 59, 70};
    array1d[0] = 33;
    printf("%d", array1d[0]);
    //int array1d[4]; 2 variaveis com o mesmo nome
    for(int i = 0; i < 4; i++) {
        array1d[i] = 0;
    }
}