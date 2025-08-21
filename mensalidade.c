/*
-> Criar um programa capaz de receber 3 valores de mensalidade de um usuário;
->Solicitar ao usuário informar se haverá ou não de taxa (*1.27);
-> resultados (saida no terminal):
-mostrar nome do usuário; OK👌👌
-mostrar a média dos valores da mensalidade sem taxa
-mostrar a média dos valores com taxa aplicada
*/

#include <stdio.h>
int main(void)
{
    float men1;
    float men2;
    float men3;
    float resultados;
    int taxinha;

    char aluno [100];
    printf("Digite seu nome completo: \n");
    fgets(aluno, sizeof(aluno), stdin);
    printf("Seu nome é: %s", aluno);


    printf("Digite o valor da primeira parcela: ");
    scanf("%f", &men1);

    printf("Digite o valor da segunda parcela: ");
    scanf("%f", &men2);

    printf("Digite o valor da terceira parcela: ");
    scanf("%f", &men3);

    printf("Esse valor contara com a taxa? (sim = 1 / nao = 0): ");
    scanf("%d", &taxinha);
    
    resultados = (men1 + men2 + men3)/3;

    if (taxinha == 1) {
        printf("O valor com taxa eh de %.2f", (resultados*1.27));
    }
    else if (taxinha == 0) {
        printf("O valor da mensalidade eh: %.2f", resultados);
    }
    else {
        printf("Dados incorretos. Verifique!");
    }
    return 0;
}