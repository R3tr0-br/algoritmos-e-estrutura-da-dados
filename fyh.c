#include <stdio.h>
int main(void) {

    int dia = 4;
    switch (dia) {
        case 6:
            printf("\nOlá, hoje é sábado!\n");
            break;
        case 7:
            printf("\nHoje é domingo\n");
            break;
        default:
            printf("\nAnsioso pelo fim de semana!\n");
    }
}