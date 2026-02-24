#include <stdio.h>

int main() {
    /* váriaveis char e double para armazenar os caractéres dos operadores(+,-,*,/) e o double para armazenar os números inteiros.
    */
    char operador;
    double primeiro, segundo;
    printf("Escolha o seu Operador (+, -, /, * ): ");
    scanf("%c",&operador);
    
    printf("Escolha dois números um por um:");
    scanf("%lf %lf",&primeiro,&segundo);
   /* switch e case para caso for + o valor 1 vai somar com o valor 2, assim como as outras 3 operações.
   */
    switch(operador)
    {
        case '+':
        printf("%lf + %lf = %lf",primeiro,segundo,(primeiro+segundo));
            break;
        case '-':
        printf("%lf - %lf = %lf",primeiro,segundo,(primeiro-segundo));
            break;
        case '/':
            if( segundo != 0.0)
        printf("%lf / %lf = %lf",primeiro,segundo,(primeiro/segundo));
            else
            printf("Divide por 0");
            break;
    /*
    */
        case '*':
        printf("%lf * %lf = %lf",primeiro,segundo,(primeiro*segundo));
            break;
            
        default:
            printf("Operador Inválido!");
            break;
    }
    
    return 0;
}
