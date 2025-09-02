#include <stdio.h>
#include <string.h>
#include <stdint.h>
int main(void) {
/*
    char str1[20] = "Hello ";
    char str2[] = "World!";
    strcat (str1, str2);
    printf("%s \n", str1);

    strcpy (str2, str1);
    printf("%s", str2);
*/
/*
    char str1[] = "ola";
    char str2[] = "ola";
    char str3[] = "oi";
    printf ("%d\n", strcmp(str1, str2));
    printf ("%d\n", strcmp(str1, str3));
*/
/*
    char str1[30] = 0;
    char str2[25];
    
    //'zerar' cada posição das strings
    //mostrar o conteudo 'vazio' delas
    //pegar via terminal, o nome completo(str1) e o nome da cidade (str2)
    //mostrar o tamanho da string 
    
    printf("Digite seu nome: ", str1);
    scanf("%c\n", str1);

    printf("Digite sua cidade: ", str2);
    scanf("%c\n", str2);

    printf("%c\n" strlen(str1));
*/

    //int idade = 43;
    //printf("%d", idade);
    //printf("\n%p", &idade);
    //int* ptr = &idade;
    //printf("%d\n", idade);
    //printf("%p\n", &idade);
    //printf("%p\n", ptr);

    //int x = 5, y = 7, z = 0;
    //z = x * y;
    //int* p = NULL;
    //p = &z;
    //printf("\n%i", z);
    //printf("\n%p", &z);
    //printf("\n%p", p);

    //int idade = 41;
    //int*  ptr = &idade;
    //printf("%p\n", ptr);
    //printf("%d\n", *ptr);
    //printf("%d", idade);

    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    for (int i = 0; i < 8; i++) {
        printf("%p\n", &arr[i]);
    }
}