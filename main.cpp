//Aluno: Francisco Ferreira de Conceição
//Atividade: Simulação de Desativação de Bomba


#include <stdio.h>
#include <unistd.h>

int main()
{
    int tempoRestante = 10;

    printf("=====================================\n");
    printf("      PAINEL DE SEGURANCA ATIVO      \n");
    printf("=====================================\n\n");

    // Enquanto o tempo não chegar a zero, a contagem continua
    while (tempoRestante >= 0)
    {
        printf("Desativacao em andamento... %d\n", tempoRestante);
        sleep(1);
        tempoRestante--;
    }

    printf("\nSistema estabilizado.\n");
    printf("Bomba desativada com sucesso!\n");

    return 0;
}