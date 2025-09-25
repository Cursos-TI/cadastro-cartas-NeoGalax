#include <stdio.h>

/*
  trunfo.c
  Desafio Super Trunfo - Países (nível iniciante)
  Objetivo: ler dados de duas cartas (cidades) e exibi-los formatados.
  Requisitos:
    - Ler dados de 2 cartas via teclado (scanf).
    - Armazenar em variáveis adequadas.
    - Exibir cada campo em linha separada, com formatação.
    - NÃO usar estruturas de repetição (for/while) nem decisões (if/else).
*/

int main() {
    /* --------------------------
       Declaração das variáveis
       --------------------------
       Cada carta possui campos definidos pelo enunciado:
         - estado: uma letra (A..H) -> tipo char
         - codigo: string de 3 caracteres (ex: "A01") -> array char[4] para '\0'
         - nome: nome da cidade (pode conter espaços) -> array char grande
         - populacao: inteiro
         - area: float (km²)
         - pib: float (bilhões)
         - pontos_tur: inteiro
       Observação: tamanhos das strings foram escolhidos para evitar overflow
       em entradas razoáveis. Ajuste se desejar suportar nomes maiores.
    */

    /* Variáveis da Carta 1 */
    char estado1;           /* letra representando o estado (A..H) */
    char codigo1[4];        /* código no formato "LNN" (3 chars + '\0') */
    char nome1[100];        /* nome da cidade (até 99 chars + '\0') */
    int populacao1;         /* população (número inteiro) */
    float area1;            /* área em km² (valor flutuante) */
    float pib1;             /* PIB da cidade (bilhões) */
    int pontos_tur1;        /* número de pontos turísticos */

    /* Variáveis da Carta 2 */
    char estado2;
    char codigo2[4];
    char nome2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_tur2;

    /* --------------------------
       Instruções iniciais ao usuário
       --------------------------
       Mensagens de orientação para facilitar o uso.
       Importante: todas as leituras usam especificadores com largura
       ou formatos que evitam overflow simples quando usuário entra
       dados com tamanho razoável.
    */
    printf("Cadastro de 2 cartas - Super Trunfo (Países)\n");
    printf("Siga as instrucoes abaixo. Para nomes com espacos, tecle Enter ao final.\n\n");

    /* --------------------------
       Entrada da Carta 1
       --------------------------
       Observações sobre scanf usados:
         - " %c" (com espaço antes) consome eventuais '\n' pendentes no buffer.
         - "%3s" limita a leitura a 3 caracteres, evitando overflow no campo codigo.
         - " %99[^\n]" lê até o fim da linha (incluindo espaços) — lê até '\n'
            e garante que no máximo 99 caracteres sejam lidos (restante para '\0').
         - Para inteiros e floats usamos %d e %f normalmente.
       Nota: estas escolhas tornam a entrada mais robusta sem usar funções
       mais complexas como fgets + sscanf (que também seriam válidas).
    */

    printf("CARTA 1\n");

    /* Lê o estado: caractere único (ex: 'A') */
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);  /* espaço no formato para pular whitespace anterior */

    /* Lê o código da carta (ex: A01). %3s lê até 3 caracteres. */
    printf("Codigo da Carta (ex: A01): ");
    scanf(" %3s", codigo1);

    /* Lê o nome da cidade incluindo espaços até a quebra de linha.
       O espaço inicial no formato consome o '\n' remanescente. */
    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", nome1);

    /* Lê populacao (int) */
    printf("Populacao (numero inteiro): ");
    scanf("%d", &populacao1);

    /* Lê area em km² (float). Ex.: 1521.11 */
    printf("Area (km2, ex: 1521.11): ");
    scanf("%f", &area1);

    /* Lê PIB (float). Interpretado como bilhões, conforme enunciado. */
    printf("PIB (bilhoes de reais, ex: 699.28): ");
    scanf("%f", &pib1);

    /* Lê numero de pontos turisticos (int) */
    printf("Numero de Pontos Turisticos (inteiro): ");
    scanf("%d", &pontos_tur1);

    printf("\n"); /* separador visual */

    /* --------------------------
       Entrada da Carta 2
       --------------------------
       Repeti para a segunda carta sem usar estruturas de repetição,
       conforme exigência do exercício.
    */
    printf("CARTA 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf(" %3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", nome2);

    printf("Populacao (numero inteiro): ");
    scanf("%d", &populacao2);

    printf("Area (km2, ex: 1200.25): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes de reais, ex: 300.50): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos (inteiro): ");
    scanf("%d", &pontos_tur2);

    /* --------------------------
       Exibição dos dados cadastrados
       --------------------------
       Apresenteib cada campo em linha separada com rótulos descritivos.
       Formatação:
         - Area e PIB com duas casas decimais usando "%.2f".
         - População e pontos turísticos como inteiros.
       Observação: o símbolo de grau (°) não é usado aqui; usamos "km²".
    */
    printf("\n==========================\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);                            /* ex: A */
    printf("Codigo: %s\n", codigo1);                           /* ex: A01 */
    printf("Nome da Cidade: %s\n", nome1);                     /* pode conter espaços */
    printf("Populacao: %d\n", populacao1);                     /* inteiro */
    printf("Area: %.2f km²\n", area1);                         /* duas casas decimais */
    printf("PIB: %.2f bilhoes de reais\n", pib1);              /* formato pedido */
    printf("Numero de Pontos Turisticos: %d\n", pontos_tur1);

    printf("\n"); /* separador entre cartas */

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_tur2);

    /* Fim do programa */
    return 0;
}
