// Copyright 2022 Rômulo
#include <stdio.h>

int main()
{

    printf("╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                                                                                                      ║\n");
    printf("║      ██╗ ██████╗  ██████╗  ██████╗     ██████╗  █████╗     ███████╗ ██████╗ ██████╗  ██████╗ █████╗  ║\n");
    printf("║      ██║██╔═══██╗██╔════╝ ██╔═══██╗    ██╔══██╗██╔══██╗    ██╔════╝██╔═══██╗██╔══██╗██╔════╝██╔══██╗ ║\n");
    printf("║      ██║██║   ██║██║  ███╗██║   ██║    ██║  ██║███████║    █████╗  ██║   ██║██████╔╝██║     ███████║ ║\n");
    printf("║ ██   ██║██║   ██║██║   ██║██║   ██║    ██║  ██║██╔══██║    ██╔══╝  ██║   ██║██╔══██╗██║     ██╔══██║ ║\n");
    printf("║ ╚█████╔╝╚██████╔╝╚██████╔╝╚██████╔╝    ██████╔╝██║  ██║    ██║     ╚██████╔╝██║  ██║╚██████╗██║  ██║ ║\n");
    printf("║  ╚════╝  ╚═════╝  ╚═════╝  ╚═════╝     ╚═════╝ ╚═╝  ╚═╝    ╚═╝      ╚═════╝ ╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝ ║\n");
    printf("║                                                                                                      ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");

    printf("\n");

    printf("╔═[Informações]════════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║ Author:               Rômulo do Carmo Sousa                                                          ║\n");
    printf("║ Data:                 07/12/22                                                                       ║\n");
    printf("║ Máximo de tentativas: 5                                                                              ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");

    int numero_secreto = 42;
    int game_over = 0;
    int maximo_tentativas = 5;
    int tentativa_atual = 1;
    int chute;

    while (!game_over)
    {
        printf("")
        printf("╔═[Placar]═════════════════════════════════════════════════════════════════════════════════════════════╗\n");
        printf("║ Tentativa %d de %d                                                                                   ║\n", tentativa_atual, maximo_tentativas);
        printf("╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");

        printf("\nQual é o seu chute? ");
        scanf("%d", &chute);

        if (tentativa_atual == maximo_tentativas) {
            printf("Você perdeu!");
            break;
        }

        if (chute > numero_secreto) {
            printf("\nO número %d é maior que o número secreto!\n", chute);
            tentativa_atual += 1;
            continue;
        }
        else if (chute < numero_secreto)
        {
            printf("\nO número %d é menor que o número secreto!\n");
            tentativa_atual += 1;
            continue;
        }
        else if (chute == numero_secreto)
        {
            printf("Parabéns o %d é o número secreto!\n", numero_secreto);
            break;
        }
    }
    return 0;

}
