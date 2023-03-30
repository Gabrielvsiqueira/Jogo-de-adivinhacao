#include <stdio.h>
#include <stdlib.h>
int main()
{

    printf("---------------------------------------\n");
    printf("-- BEM-VINDO AO JOGO DA ADIVINHAÇÃO! --");
    printf("\n---------------------------------------\n");
    
    int i, x;
    int numero;
    int chute;
    int NUMERO_DE_TENTATIVAS;
    int acertou;
    int nivel;
    
    
    printf("\nEscolha o nível de dificuldade que deseja jogar:\n");
    printf("(1)Fácil || (2)Médio || (3)Difícil\n");
    printf("\nEscolha:");
    
    srand(time(NULL));
    numero = rand () % 100;
    
    scanf("%d", &nivel);
    
    switch (nivel)
    {
        case 1:
            NUMERO_DE_TENTATIVAS = 7;
            break;
        
        case 2:
            NUMERO_DE_TENTATIVAS = 14;
            break;
            
        default:
            NUMERO_DE_TENTATIVAS = 21;
            break;
        
    }
    
    for(i=1; i<=NUMERO_DE_TENTATIVAS; i++)
    {
        printf("\n Tentativa %d de %d:", i,NUMERO_DE_TENTATIVAS);
        
        printf("\nChute um numero: ");
        scanf("%d", &chute);
        
        if(chute < 0)
        {
            printf("Programa não aceita número negativo.");
            i--;
            continue;
        }
        
        if(chute == numero)
        {
            printf("Você acertou o número!");
            break;
        }
        
        else if(chute > numero)
        {
            printf("Você chutou um número muito alto.");
        }
        
       else
       {
             printf("Você chutou um número muito baixo.");
       }
    }
    
}