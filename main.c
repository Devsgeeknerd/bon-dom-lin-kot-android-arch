// Inclui a biblioteca padrão de entrada e saída.
#include <stdio.h>
// Inclui a biblioteca padrão para funções utilitárias.
#include <stdlib.h>

// Função principal do programa.
void main()
{
    // Declara uma variável para armazenar a primeira nota.
    float nota1;
    // Declara uma variável para armazenar a segunda nota.
    float nota2;
    // Declara uma variável para armazenar a média das notas.
    float media;
    // Declara uma variável para armazenar a opção de repetir o cálculo.
    char repetir;

    // Inicia um loop que permite ao usuário calcular a média repetidamente.
    do
    {
        // Solicita ao usuário que digite a primeira nota.
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1); // Lê a primeira nota e armazena na variável 'nota1'.

        // Valida se a primeira nota está dentro do intervalo permitido (0 a 10).
        while (nota1 < 0 || nota1 > 10)
        {
            // Informa ao usuário que a entrada é inválida e solicita uma nova nota.
            printf("Digite uma nota entre 0 e 10: ");
            // Lê novamente a nota e armazena na variável 'nota1'.
            scanf("%f", &nota1);
        }

        // Solicita ao usuário que digite a segunda nota.
        printf("Digite a segunda nota: ");
        // Lê a segunda nota e armazena na variável 'nota2'.
        scanf("%f", &nota2);

        // Valida se a segunda nota está dentro do intervalo permitido (0 a 10).
        while (nota2 < 0 || nota2 > 10)
        {
            // Informa ao usuário que a entrada é inválida e solicita uma nova nota.
            printf("Digite uma nota entre 0 e 10: ");
            // Lê novamente a nota e armazena na variável 'nota2'.
            scanf("%f", &nota2);
        }

        // Calcula a média das duas notas.
        media = (nota1 + nota2) / 2;

        // Exibe a média das notas com duas casas decimais.
        printf("A media das notas e: %0.2f", media);

        // Pergunta ao usuário se deseja repetir o cálculo.
        printf("\nDeseja repetir o calculo? [S/N]");
        // Limpa o buffer de entrada para evitar problemas com a leitura do caractere.
        fflush(stdin);
        // Lê a resposta do usuário e armazena na variável 'repetir'.
        scanf(" %c", &repetir);
        // Continua o loop se o usuário responder 'S' ou 's'.
    } while ((repetir == 'S') || (repetir == 's'));
    // Retorna 0 para indicar que o programa terminou com sucesso.
    return 0;
}
