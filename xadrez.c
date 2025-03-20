#include <stdio.h>
/*
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
    */
   // função recursiva que move a rainha
   void moverRainha( int casas){  

    //condição para executar o loop
    if (casas > 0 ){ 

        // faz a repetição ate sair do loop
        moverRainha(casas-1); 

        //imprime o andar das peças
        printf("Rainha Esquerda\n",casas); 
    }
}
// função recursiva que move a torre
void moverTorre(int casas){ 

    //condição para executar o loop
    if ( casas > 0){
        
        //faz a repetição ate sair do loop
        moverTorre (casas-1); 
        //imprime o andar das peças
        printf("Torre Direita\n",casas);
    }
}

int main(){

    // parametros de quantas casas cada peça anda
    int rainha, torre, bispoCima; 

    //solicida o usuario quantas casas a peça deve andar
    printf("Selecione quantas movimentos a Rainha deve fazer: ",rainha);
    scanf("%d",&rainha);

    printf("Selecione quantos movimentos a Torre deve fazer: ",torre);
    scanf("%d",&torre);
    printf("Selecione quantos movimentos o Bispo deve fazer: ",bispoCima);
    scanf("%d",&bispoCima);

    // insere o numero de vezes que o loop se repete
    moverRainha(rainha); 

    printf("\n");

    moverTorre(torre); 

    printf("\n");
    
    /*
     Move o cavalo pra cima e para a direita. OBS: o cavalo não escolhe quantas casas andar.
     Só pode andar em L, então só escolhe os lados, portanto não botei a entrada do usuario.
    */
    // move o cavalo para cima
    for (int cima = 1; cima <= 2; cima++) {
        printf("Cavalo Cima\n", cima);

        // Quando chega no segundo movimento para cima, o cavalo move para direita
        if (cima == 2) { 
            for (int direita = 1; direita <= 1; direita++) {
                printf("Cavalo Direita\n", direita);
            }
        }
    }
    printf("\n");
     
      //  move o bispo para cima externo para cima e o interno para direita
     for (bispoCima; bispoCima >= 1; bispoCima--) {
        printf("Bispo Cima \n",bispoCima);

        //move o bispo para direita
        for (int bispoDireita = 1; bispoDireita >= 1; bispoDireita--){
        printf("Bispo direita \n",bispoDireita);
        }
        
     }
     
    return 0;
}
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    
