#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

    int opcao;
    float temp, tempConv;

    setlocale(LC_ALL,"portuguese_brazil");
    printf("By: ThiagoDev(confia) :))\n");
    printf("---> Bem vindo ao conversor de Temperaturas <---\n\n");

    do {
        printf("Selecione a opção desejada:\n\n");
        printf("Opção 1 - Celsius -> Fahrenheit\n");
        printf("Opção 2 - Fahrenheit -> Celsius\n");
        printf("Opção 3 - Celsius -> Kelvin\n");
        printf("Opção 4 - Sair\n\n");



            printf("Digite uma opção: ");
            scanf("%d", &opcao);

            if (opcao < 1 || opcao > 4) {
                printf("\nOpção inválida. Tente novamente!\n\n");
            }

        system("cls");
        switch (opcao) {
            case 1:

            printf("Digite a temperatura em Celsius:\n");
            scanf("%f", &temp);

            // formula Celsius -> fahrenheit
            tempConv = temp * 1.8 + 32;
            printf("\nTemperatura Convertida: %.1fºF\n\n", tempConv);
            break;

        case 2:
            printf("Digite a temperatura em Fahrenheit:\n");
            scanf("%f", &temp);

            // formula Fahrenheit -> Celsius
            tempConv = (temp - 32) / 1.8;
            printf("\nTemperatura Convertida: %.1fºC\n\n", tempConv);
            break;

        case 3:
            printf("Digite a temperatura em Celsius:\n");
            scanf("%f", &temp);

            // formula Celsius -> Kelvin
            tempConv = temp + 273.15;
            printf("\nTemperatura Convertida: %.2fK\n\n", tempConv);
            break;

        case 4:
            printf("Programa encerrado!");
            break;
        }

    } while (opcao != 4);

    return 0;
}
