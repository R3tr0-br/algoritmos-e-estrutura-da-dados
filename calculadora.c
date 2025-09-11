#include <stdio.h>
#include <math.h>

float raiz() {
    float resultado = 0;
    float num1 = 0;
    printf("Digite o valor para o cálculo da raiz quadrada: ");
    scanf("%f", &num1);
    resultado = sqrt(num1);
    return resultado;
}
float raiz3() {
    float resultado2 = 0;
    float num2 = 0;
    printf("Digite o valor para o calculo da raiz cubica: ");
    scanf("%f", &num2);
    resultado2 = cbrt(num2);
    return resultado2;
}

float x_y() {
    float resultado3 = 0;
    float num3 = 0;
    printf("Digite o valor de X: ");
    scanf("%f", &num3);
    resultado3 = exp2(num3);
    return resultado3;
}

float seno() {
    float resultado4 = 0;
    float num4 = 0;
    printf("Digite um numero: ");
    scanf("%f", &num4);
    resultado4 = sin(num4);
    return resultado4;
}

int main(void) {

    int op;

    printf("###### MINHA CALCULADORA ######\n");
    printf("##### ESCOLHA A OPERACAO #####\n");
    printf("##### 1.RAIZ QUADRADA #####\n");
    printf("###### 2.RAIZ CÚBICA######\n");
    printf("##### 3.X ELEVADO A 2 #####\n");
    printf("##### 4.SENO DO ANGULO#####\n\n");
    scanf("%d", &op);


    if (op == 1) {
        float resultado_raiz = 0;
        resultado_raiz = raiz();
        printf("O resultado da raiz é %f", resultado_raiz);
    }

    else if (op == 2) {
        float resultado_3 = 0;
        resultado_3 = raiz3();
        printf("O resultado da raiz cubica eh %f", resultado_3);
    }

    else if (op == 3) {
        float resultado_x = 0;
        resultado_x = x_y();
        printf("O resultado de x por y eh %f", resultado_x);
    }
    else {
        float resultado_seno = 0;
        resultado_seno = seno();
        printf("O seno do numero é %f", resultado_seno);
    }

    return 0;
}
