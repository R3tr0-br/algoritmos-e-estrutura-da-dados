#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
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

    //int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    //for (int i = 0; i < 8; i++) {
      //  printf("%p\n", &arr[i]);
    //}
    //int arr[4] = {10, 20, 30, 40};
    //printf("%p\n", arr);
    //printf("%p\n", &arr[0]);
    //printf("%d\n", *arr);

    //int arr[4] = {10, 20, 30, 40};
    //int *ptr = arr;
    //for(int i = 0; i < 4; i++) {
     //   printf("%d\n", *(ptr + i));
    //}

    //int arr[4] = {10, 20, 30, 40};
    //*arr = 7;
    //*(arr+1) = 14;
    //for (int i = 0; i < 4; i++) {
    //    printf("%d\n", *(arr + i));
    //}

    //int n, i;
    //int *valores; //float notas
 
    //printf("Quantos numeros voce quer armazenar? ");
    //scanf("%d", &n);

    //valores = (int*) malloc(n * sizeof(int)); //notas = (float*) calloc(n, sizeof(float));
    //if (valores == NULL) {
    //    printf("Erro ao alocar memoria!\n");
    //    return 1;
    //}
    //comando free() para liberar a memória alocada anteriormente 

    //int num1 = 10, num2 = 15, num3 = 25;
    //printf("\t%d\n", num1 + num2 + num3);
    //printf("%d", 5 > 5);
    //int x = 36;
    //int y = 36;
    //if (x == y) {
    //       printf("1");
    //} else if (x > y) {
    //        printf("2");
    //} else {
    //        printf("3");
    //}
    //for (int i = 2; i <= 512; i *= 2) {
    //    printf("%d\n", i);
    //  }
    char str[] = "programacao";
char letra = 'a';
int i;

for (i = 0; str[i] != '\0'; i++) {
     if (str[i] == letra) {
         printf("Letra '%c' encontrada na posição %d\n", letra, i);
     }
}  
}