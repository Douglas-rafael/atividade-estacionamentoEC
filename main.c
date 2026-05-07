#include <stdio.h>

int main() {
    char placa[10];
    int tipoVeiculo;
    float tempo;
    float valorHora = 0;
    float valorBase = 0;
    float desconto = 0;
    float multa = 0;
    float valorFinal = 0;
    char *tipoTexto;

    printf("Digite a placa do veiculo: ");
    scanf("%9s", placa);

    printf("Digite o tipo do veiculo:\n");
    printf("1 - Carro\n");
    printf("2 - Moto\n");
    printf("3 - Caminhonete\n");
    printf("Opcao: ");
    scanf("%d", &tipoVeiculo);

    printf("Digite o tempo de permanencia em horas: ");
    scanf("%f", &tempo);

    if (tempo <= 0) {
        printf("Tempo de permanencia invalido.\n");
        return 1;
    }

    switch (tipoVeiculo) {
        case 1:
            valorHora = 5.0;
            tipoTexto = "Carro";
            break;

        case 2:
            valorHora = 3.0;
            tipoTexto = "Moto";
            break;

        case 3:
            valorHora = 8.0;
            tipoTexto = "Caminhonete";
            break;

        default:
            printf("Tipo de veiculo invalido.\n");
            return 1;
    }

    if (tempo <= 1) {
        valorBase = valorHora;
    } else {
        valorBase = valorHora * tempo;
    }

    if (tempo > 5) {
        desconto = valorBase * 0.10;
    }

    if (tempo > 10) {
        multa = 20.0;
    }

    valorFinal = valorBase - desconto + multa;

    printf("\n===== RESUMO DO ESTACIONAMENTO =====\n");
    printf("Placa do veiculo: %s\n", placa);
    printf("Tipo do veiculo: %s\n", tipoTexto);
    printf("Tempo de permanencia: %.2f horas\n", tempo);
    printf("Valor base: R$ %.2f\n", valorBase);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Multa: R$ %.2f\n", multa);
    printf("Valor final a pagar: R$ %.2f\n", valorFinal);

    return 0;
}
