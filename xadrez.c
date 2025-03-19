#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    int torre = 1, bispo = 1, rainha =1, cavalo =1;  //varial de entrada, serve para todos os loops!
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    // do-while esta sendo usado para repetir o movimento da torre 5 vezes.
    do{ 
    printf("Bispo (%d)  para Cima, Direta!\n",bispo); 
    bispo++; // incrementa +1 a variavel até a função tornar-se falsa e parar o loop.
    } while (bispo <=5);  // define o limite de repetições.


    printf("\n");//separando as peças para melhor vizualização

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // while esta sendo usado para repetir o movimento da torre 5 vezes.
    while ( torre <=5) { // define o limite de repetições
    printf("Torre (%d) para a Direita!\n",torre); 
    torre++; // incrementa +1 a variavel até a função tornar-se falsa.
    }

    printf("\n");//separando as peças para melhor vizualização

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // int rainha = 1: informa o inicio da variavel, rainha <=8: define o limite de repetições, i++: incrementa até a variavel se tornar falsa e parar o loop.
    for (int rainha = 1; rainha <= 8 ; rainha++){    
        printf("Rainha (%d) para a Esquerda!\n", rainha);
    }

    printf("\n");//separando as peças para melhor vizualização
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    while ( cavalo--){//o loop while faz o cavalo anda -1 para direita.
       
        for (int i = 1; i <=2 ; i++){ //o loop for faz o cavalo anda 2 para cima.
        
            printf("Cavalo (%d) para Cima\n",i);
            
        } 
        
        printf("Cavalo (%d) para a Direita\n",cavalo +1); // usei o incremento +1 para tirar  while de 0 e voltar para 1. 
                                                   
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
