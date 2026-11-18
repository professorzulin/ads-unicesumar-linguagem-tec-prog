
#include <stdio.h> // Biblioteca para printf e scanf

int main() {

    // Vetor para armazenar as 5 notas
    float notas[5];

    // Variavel para guardar a opcao do menu
    int opcao;

    // Controla se as notas ja foram cadastradas
    // 0 = nao cadastradas | 1 = cadastradas
    int cadastradas = 0;

    // Contador de notas maiores ou iguais a 6
    int aprovados;

    // Repete o menu ate o usuario escolher sair
    do {

        // Exibe as opcoes do menu
        printf("\n===== MENU DE NOTAS =====\n");
        printf("1 - Cadastrar notas\n");
        printf("2 - Mostrar todas as notas\n");
        printf("3 - Contar notas >= 6\n");
        printf("0 - Sair\n");

        // Solicita a opcao desejada
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Executa a opcao escolhida pelo usuario
        switch (opcao) {

            case 1:
                // Cadastrar as 5 notas

                // O for percorre as posicoes de 0 a 4
                for (int i = 0; i < 5; i++) {

                    // Repete ate receber uma nota valida
                    do {
                        printf("Digite a nota %d: ", i + 1);

                        // Armazena a nota na posicao i
                        scanf("%f", &notas[i]);

                        // Verifica se a nota esta fora
                        // do intervalo permitido
                        if (notas[i] < 0 || notas[i] > 10) {
                            printf("Nota invalida!\n");
                        }

                    // Repete se a nota for invalida
                    } while (notas[i] < 0 || notas[i] > 10);
                }

                // Indica que as notas foram cadastradas
                cadastradas = 1;

                printf("Notas cadastradas!\n");

                // Encerra o case 1
                break;

            case 2:
                // Mostrar todas as notas cadastradas

                // Verifica se existem notas cadastradas
                if (cadastradas == 1) {

                    // Percorre as 5 posicoes do vetor
                    for (int i = 0; i < 5; i++) {

                        // Exibe o aluno e sua nota
                        printf("Aluno %d: %.1f\n",
                               i + 1, notas[i]);
                    }

                } else {
                    // Mensagem caso nao existam notas
                    printf("Cadastre as notas primeiro!\n");
                }

                break;

            case 3:
                // Contar notas maiores ou iguais a 6

                if (cadastradas == 1) {

                    // Zera o contador antes da contagem
                    aprovados = 0;

                    // Percorre todas as notas
                    for (int i = 0; i < 5; i++) {

                        // Verifica se a nota e >= 6
                        if (notas[i] >= 6) {

                            // Aumenta o contador em 1
                            aprovados++;
                        }
                    }

                    // Exibe a quantidade encontrada
                    printf("Notas >= 6: %d\n", aprovados);

                } else {
                    printf("Cadastre as notas primeiro!\n");
                }

                break;

            case 0:
                // Opcao para encerrar o programa
                printf("Encerrando programa...\n");
                break;

            default:
                // Executado quando a opcao nao existe
                printf("Opcao invalida!\n");
        }

    // Retorna ao menu enquanto opcao for diferente de 0
    } while (opcao != 0);

    // Finaliza o programa
    return 0;
}
