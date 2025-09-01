#include <stdio.h>
int main(void) {

    int i = 0;
    while (i < 10){
        if (i == 4) {
            i++; 
            continue;
            //break;
        }
        printf("%d\n", i);
        i++;
    }
}