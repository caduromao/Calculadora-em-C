#include <stdio.h>
#include <stdlib.h>

//Função de SOMA
float soma (float v1, float v2){
    
    float resultado = 0;
    resultado = v1 + v2;
    return (resultado);

}

//Função de Subitração
float sub (float v1, float v2){
    
    float resultado = 0;
    resultado = v1 - v2;
    return (resultado);

}

//Função de Multiplicação
float multi (float v1, float v2){
    
    float resultado = 0;
    resultado = v1 * v2;
    return (resultado);

}

//Função de Divisão
float divisao (float v1, float v2){
    
    float resultado = 0;
    resultado = v1 / v2;
    return (resultado);

}

int main (){

    float valor1, valor2, result = 0;
    int condi = 0;
    int operador = 0;

    do{
        system ("cls");
        printf("------------------- Menu Principal ------------------\n");
        printf("--------- Calculadora de dois componentes -----------\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");
        printf("Select: ");
        printf("\n");
        scanf("%d", &operador);
        printf("\n");

        if (operador == 5){
            return 0;
        }
    

        switch (operador){

            case 1:

                do{

                    system ("cls");
                    printf("----------- Soma ----------"); //Scan das variaveis
                    printf("\n");
                    printf("Digite o primeiro valor: ");
                    scanf("%f", &valor1);
                    printf("\n");
                    printf("Digite o segundo valor: ");
                    scanf("%f", &valor2);
                    printf("\n");

                    result = soma(valor1, valor2); //Aciona função SOMA

                    printf("Resultado e %.2f\n", result);
                    printf("\n");

                    printf("----------- Menu ----------\n"); //Menu pós resultado
                    printf("1 - Calcular novamente.\n");
                    printf("2 - Voltar pro menu principal.\n");
                    printf("3 - Sair.\n");
                    scanf("%d", &condi);
                    printf("\n");

                } while (condi == 1);
                break;

                //Finaliza o programa
                if (condi == 3){
                    return 0;
                }

            case 2:

                do{

                    system ("cls");
                    printf("----------- Subtracao ----------");
                    printf("\n");
                    printf("Digite o primeiro valor: ");
                    scanf("%f", &valor1);
                    printf("\n");
                    printf("Digite o segundo valor: ");
                    scanf("%f", &valor2);
                    printf("\n");

                    result = sub(valor1, valor2);

                    printf("Resultado e %.2f\n", result);
                    printf("\n");
                    printf("----------- Menu ----------\n");
                    printf("1 - Calcular novamente.\n");
                    printf("2 - Voltar pro menu principal.\n");
                    printf("3 - Sair.\n");
                    scanf("%d", &condi);
                    printf("\n");

                } while (condi == 1);
                break;

                if (condi == 3){
                    return 0;
                }

            case 3:

                do{

                    system ("cls");
                    printf("----------- Multiplicacao ----------");
                    printf("\n");
                    printf("Digite o primeiro valor: ");
                    scanf("%f", &valor1);
                    printf("\n");
                    printf("Digite o segundo valor: ");
                    scanf("%f", &valor2);
                    printf("\n");

                    result = multi(valor1, valor2);

                    printf("Resultado e %.2f\n", result);
                    printf("\n");
                    printf("----------- Menu ----------\n");
                    printf("1 - Calcular novamente.\n");
                    printf("2 - Voltar pro menu principal.\n");
                    printf("3 - Sair.\n");
                    scanf("%d", &condi);
                    printf("\n");

                } while (condi == 1);
                break;

                if (condi == 3){
                    return 0;
                }

            case 4:

                do{

                    system ("cls");
                    printf("----------- Divisao ----------");
                    printf("\n");
                    printf("Digite o primeiro valor: ");
                    scanf("%f", &valor1);
                    printf("\n");
                    printf("Digite o segundo valor: ");
                    scanf("%f", &valor2);
                    printf("\n");

                    result = divisao(valor1, valor2);

                    printf("Resultado e %.2f\n", result);
                    printf("\n");
                    printf("----------- Menu ----------\n");
                    printf("1 - Calcular novamente.\n");
                    printf("2 - Voltar pro menu principal.\n");
                    printf("3 - Sair.\n");
                    scanf("%d", &condi);
                    printf("\n");

                } while (condi == 1);
                break;

                if (condi == 3){
                    return 0;
                }
                
            
            default:
                break;
        }

    } while (condi == 2);

}