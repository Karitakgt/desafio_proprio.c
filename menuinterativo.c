#include <stdio.h>
#include <stdlib.h>
#include  <time.h>


int main() {

    // Declaração e/ou inicialização de variáveis
    int opcao;
    float nota, nota1, nota2, nota3, media;
    float temperatura;
    int idade;
    unsigned int estoqueLaranja, estoqueManga, estoqueUva;
    char letra = 'K';
    int idade2, matricula;
    float altura;
    char nome[50];
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;
    int v[5];
    int i;
    float soma;
    float renda;
    int num;
    int dia;
    

    // Criação de menu interativo 

    do
    {
        printf("\n");
        printf("=== MENU PRINCIPAL === \n");
        printf("1. Calcular a média\n");
        printf("2. Determinar o Status\n");
        printf("3. Definir a temperatura\n");
        printf("4. Uso do If - else\n");
        printf("5. Verificação de Idade\n");
        printf("6. Verificação de estoque\n");
        printf("7. Verificação de Idade e altura\n");
        printf("8. Uso de estrutura encadeada\n");
        printf("9. Jogo de advinhar números\n");
        printf("10. Verificação do dia da semana\n");
        printf("11. Uso de estrutura aninhadas - If/Else\n");
        printf("12. Jogo JokenPo\n");
        printf("13. Uso do While\n");
        printf("14. Uso do For\n");
        printf("15. Sair\n");
        printf("Escolha uma das opções acima: ");
        scanf("%d", &opcao);

        printf("Você escolheu a opção: %d", opcao);

        printf("\n");

        switch (opcao)
        {
        case 1:
            printf("\n *** ENTRE COM AS NOTAS *** \n");
            
            printf("Digite a nota da primeira prova: ");
            scanf("%f", &nota1);

            printf("Digite a nota da segunda prova:  ");
            scanf("%f", &nota2);

            printf("Digite a nota da terceira prova:  ");
            scanf("%f", &nota3);

            media = (nota1 + nota2 + nota3) / 3;

            printf("A média das notas é: %.2f\n", media);

            printf("\n");

            break;

        case 2:
            printf("*** DETERMINAÇÃO DO STATUS *** \n");

            printf("Digite a média das provas do semestre: ");
            scanf("%f", &media);

            if (media >= 70)
            {
                printf("Parabéns, você está aprovado!\n");
            } else if (media < 70 && media >= 60)
            {
                printf("Recuperação!\n");
            } else {
                printf("Reprovado!\n");
            }         

            printf("\n");
            
        break;

        case 3:

            printf("\n *** DEFINIÇÃO DO CLIMA ***\n");
            
            printf("Digite a temperatura de sua cidade:  ");
            scanf("%f", &temperatura);

            printf("A temperatura na sua cidade é: %.1f\n", temperatura);

            temperatura >= 30 ? printf("Está calor!\n") : printf("Está Frio\n");

            printf("\n");

        break;

        case 4:

            printf("\n *** USO DO IF - ELSE ***\n");

            printf("Digite a primeira letra do nome da filha do meio de Mércia:  ");
            scanf(" %c", &letra);
            
            if (letra == 'K'){
                printf("Parabéns, acertou\n");
            } else { 
                printf("Tente novamente!\n");
            }

            printf("\n");

        break;

        case 5:

        printf("\n *** VERIFICAÇÃO DE IDADE***\n");

        printf("Digite sua idade: ");
        scanf("%d", &idade);

        (idade >= 18 && idade <= 65) ? printf("Você preenche os requisitos!\n") :  printf("Desclassificado!\n");
     

        break;

        printf("\n");

        case 6:

        printf("\n *** VERIFICAÇÃO DE ESTOQUE***\n");

        printf("Digite o numero de estoque de Laranja: ");
        scanf("%u", &estoqueLaranja);

        printf("Digite o número de estoque de Manga:  ");
        scanf("%u", &estoqueManga);

        printf("Digite o número do estoque de Uva:  ");
        scanf("%u", &estoqueUva);

        printf("Na sua Loja, o estoque de Laranja, Manga e Uva está assima: %u, %u, %u\n", estoqueLaranja, estoqueManga, estoqueUva);

        if (estoqueLaranja <= 10000 && estoqueManga <= 20000 && estoqueUva <= 30000)
        {
            printf("Estoque baixo de todos os produtos\n");
        } else if (estoqueLaranja <= 10000 || estoqueManga <= 20000 || estoqueUva <= 30000)
        {
            printf("Verificar estoque dos produtos, um deles está baixo!");
        } else {
            printf("Estoque está nos padrões\n");
        }
        
        printf("\n");

        break;
        
    case 7:

        printf("\n *** VERIFICAÇÃO DE IDADE E ALTURA ***\n");

        printf("Digite a sua idade: \n");
        scanf("%d", &idade2);

        printf("Digite a sua Altura: \n");
        scanf("%f", &altura);

        printf("Idade: %d e Altura: %.2f\n", idade2, altura);

        if (idade2 <= 13 && altura >= 1.60){
            printf("Parabéns, você é uma pessoa com estatura alta\n");
        } else if (idade2 <= 13 && altura < 1.60)
        {
           printf("Você ainda pode crescer até os 18 anos\n");
        } else {
            printf("Infelizmente, você não cresce mais!\n");
        }
        
        printf("\n");

    break;

        case 8:

        printf("\n *** USO DA ESTRUTURA ENCADEADA ***\n");
        // Determinação de nota escolar

        printf("Digite a sua nota: \n");
        scanf("%f", &nota);

        if (nota >= 90)
        {
            printf("Sua nota é A\n");
        } else if (nota >= 80)
        {
            printf("Sua nota é B\n");
        } else if (nota >= 70)
        {
            printf("Sua nota é C\n");
        } else if (nota >= 60)
        {
            printf("Sua nota é D\n");
        } else {
            printf("Sua nota é E\n");
        }    

        printf("\n");
                      
        break;

        case 9:

        printf("\n *** JOGO DE ADVINHAR NÚMEROS *** \n");

        // Gerar número aleatório

        srand(time(0)); // inicialização de números aleatórios - para evitar repetição
        numeroComputador = rand() % 1000 + 1; // Número de 1 a 1000

        // Inicio do jogo

        printf("Digite seu número (1 a 1000): ");
        scanf("%d", &numeroJogador);

        printf("O número do Computador é %d\n", numeroComputador);

        if (numeroJogador > numeroComputador)
        {
            printf("Parabéns, você ganhou!");
        } else if (numeroComputador > numeroJogador)
        {
            printf("Infelizmente, você perdeu!");
        } else if (numeroComputador == numeroJogador)
        {
            printf("Empate\n");
        }  

        printf("\n");
        
        break;

        case 10:
        printf("\n *** VERIFICAÇÃO DO DIA DA SEMANA *** \n");

        printf("Digite o dia da semana (1 a 7, começando por domingo):  ");
        scanf("%d", &dia);

        if (dia == 1)
        {
            printf("Domingo\n");
        } else if (dia == 2)
        {
            printf("Segunda-feira\n");
        } else if (dia == 3)
        {
            printf("Terça-feira\n");
        } else if (dia == 4)
        {
            printf("Quart-feira\n");
        } else if (dia == 5)
        {
            printf("Quinta-Feira\n");
        } else if (dia == 6)
        {
            printf("Sexta-Feira\n");
        } else if (dia == 7)
        {
            printf("Sábado\n");
        } else {
            printf("Dia inválido\n");
        }
        
        printf("\n");

        break;

        case 11:

        printf("\n *** ESTRUTURA ANINHADA *** \n");

        printf("Digite a sua idade: \n");
        scanf("%d", &idade);

        printf("Digite a sua renda mensal:  \n");
        scanf("%f", &renda);

        printf("Idade: %d; Renda: %.3f\n", idade, renda);

        if (idade >= 18 || idade < 65)
        {
            if (renda >= 5000.00)
            {
                printf("Você não está qualificado para o desconto especial\n");
            } else {
                printf("Você está qualificado para o desconto devido à renda\n");
            }
             
        } else {
            printf("Você está qualificado para o desconto devido à idade!");
        }
        
        printf("\n");

        break;

        case 12:
            printf("\n *** JOGO JOKENPO *** \n");

            // Escolha do Computador
            srand(time(0)); 

            printf("Escolha uma opção: \n");
            printf("1. Pedra\n");
            printf("2. Papel\n");
            printf("3. Tesoura\n");
            printf("Escolha: ");
            scanf("%d", &numeroJogador);

            numeroComputador = rand() % 3 +1;

            switch (numeroJogador)
            {
            case 1:
            printf("Jogador: pedra - ");
            break;
        case 2:
            printf("Jogador: papel - ");
            break;
        case 3:
            printf("Jogador: tesoura - ");
            break;
        
        default:
            printf("Opção inválida\n");
            break;
        }

        switch (numeroComputador)
    {
    case 1:
        printf("Computador: pedra\n");
        break;
    case 2:
        printf("Computador: papel\n");
        break;
    case 3:
        printf("Computador: tesoura\n");
        break;
    
    default:
        printf("Opção inválida\n");
        break;
    }

        // Lógica do Jogo

    if (numeroComputador == numeroJogador)
    {
       printf("*** JOGO EMPATOU! ***\n");
    } else  if ((numeroJogador == 1) && (numeroComputador == 3) || (numeroJogador == 2) && (numeroComputador == 1) || (numeroJogador == 3) && (numeroComputador == 2)) {

        printf("*** JOGADOR VENCEU***\n");

    } else {
        printf("*** COMPUTADOR VENCEU***\n");

    }
    printf("\n");
        break;

        case 13:
            printf("\n *** USO DO WHILE *** \n");

            printf("Digite um número (negativo para sair) \n");
            scanf("%d", &num);

            while (num >= 0)
            {
                printf("Você digitou: %d\n", num);

                printf("Digite um número (negativo para sair): \n");
                scanf("%d", &num);
            }

            printf("Numero negativo detectado, Saindo...\n");
            
            printf("\n");


        break;

        case 14:
            printf("\n *** USO DO FOR *** \n");

            printf("Digite um número positivo (1 -20):  ");
            scanf("%d", &num);

            int i = num;

            for (int i = num; i <= 20; i++)
            {
                if (i % 2 == 0)
                {
                    printf("%d\n", i);
                }
                
            }
            

            printf("\n");

        break;

        case 15:
            printf("\n *** Sair do menu principal *** \n");
            printf("\n");
        break;

        
        default:
            printf("Opção Inválida!");
            break;
        }


    } while (opcao != 15);
    


    return 0;
}
