#include <stdio.h>
#include <string.h>
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
}