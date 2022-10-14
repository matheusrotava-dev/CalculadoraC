#include<stdio.h>
#include <math.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");

    float x = 0;
    float y = 0;
    float resultado = 0;
    int operacao = 0;
    char nome_usuario[10];

    printf("\n ---------- seja muito bem-vindo a minha calculadora feita na linguagem C ----------");
    printf("\n Desenvolvido por : Matheus Guilherme Rotava");
    printf("\n Instituição de Ensino : universidade LaSalle ");
    printf("\n Matrícula : 202221269");
    printf("\n ------------------------------------------------------------------------------------");

    printf("\n");

    printf("\n Vamos começar ... com no máximo 10 letras, como deseja ser chamado ? ", &nome_usuario);
    scanf("%s", &nome_usuario);

    printf("\n");

    printf("\n 1 - SOMA");
    printf("\n 2 - SUBTRAÇÃO");
    printf("\n 3 - MULTIPLICAÇÃO");
    printf("\n 4 - DIVISÃO");
    printf("\n 5 - EXPONENCIACÃO");
    printf("\n 6 - RAIZ QUADRADA");
    printf("\n OBS: SE ESCOLHER 6, DIGITE O PRIMEIRO NUMERO NORMALMENTE, E O SEGUNDO DIGITE 1");
    printf("\n 7 - SAIR DO PROGRAMA");

    printf("\n");

    printf("\n muito bem %s, digite o número da operação que você deseja fazer: ", &nome_usuario );
    scanf("%i", &operacao);

    if(operacao == 7){
        printf("\n você saiu do programa");
        exit(0);
    }

    if (operacao == 5){
        printf("\n digite primeiro a base, depois o expoente" );
    }

    if (operacao == 6 ){
        printf("\n lembre-se, você so irá usar o primeiro número nesta operação ");
    }


    printf("\n Digite o primeiro número: ");
    scanf("%f", &x);
    printf("\n Digite o segundo numero: ");
    scanf("%f", &y);
    printf("\n");

    if (y == 0 && operacao == 4){
        printf("\n ZERO é um número inválido para está operação digite outro numero: ");
        scanf("%f",&y);
    }
    if ( x == 0 && operacao == 4){
        printf("\n ZERO é um número inválido para está operação digite outro numero: ");
        scanf("%f",&x);
    }

    if (y == 0 && operacao == 6){
        printf("\n ZERO é um número inválido para está operação digite outro numero: ");
        scanf("%f",&y);
    }
    if ( x == 0 && operacao == 6){
        printf("\n ZERO é um número inválido para está operação digite outro numero: ");
        scanf("%f",&x);
    }


    switch(operacao){
        case 1:
            resultado = x+y;
            break;
        case 2:
            resultado = x-y;
            break;
        case 3:
            resultado = x*y;
            break;
        case 4:
            resultado = x/y;
            break;
        case 5:
            resultado = pow(x,y);
            break;
        case 6:
            resultado = sqrt(x);
            break;
        default:
            printf("\n voce digitou uma operacao invalida, ocorreu um erro");
            break;
    }
    printf("\n %s, o resultado da operação é: %0.2f", &nome_usuario ,resultado);
    printf("\n");

    system("PAUSE");
    return 0;
}