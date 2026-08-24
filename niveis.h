#include "prototipos.h" 

int opcao = 5;
int numero = 0;
int palpite = 0;
int tentativas = 0;   

void nivel_facil()
{

    numero = numeros_aleatorios(1,50);
    centralizar("- Nivel facil -\n", 40);
    printf("\nO numero que estou pensando esta entre 1 e 50\n"
    "Boa sorte!\n");       
    
    do
    {
    
        printf("\nQual o seu palpite? ");
        scanf("%d", &palpite);
        
        if (palpite > 50 || palpite < 0) // Quando chama o número válido, a mensagem de erro aparece
        {
            printf("\nErro: Opcao invalida!\n");
            while (getchar() != '\n');
        }
    

        tentativas += 1;
        
        // Acertou
        if (palpite == numero)
        {
            printf("\nAcertaste! Eu escolhi %d!\n", numero);
            printf("Parabens! Vou pensar em um numero mais dificil na proxima vez!\n");
            printf("Voce precisou de %d tentativas!\n", tentativas);
        
        }

        // O número absoluto é sempre positivo
        int diferenca = abs(palpite - numero);

        // Proximidade
        if (diferenca <= 2)
        {
            printf("Esta muuuuito quente!!!\n");
        } 

        else if (diferenca <= 5)
        {
            printf("Esta esquentando!\n");
        } 

        else if (diferenca <= 10)
        {
            printf("Esta frio!\n");
        }

        else
        {
            printf("Muuuito frio, quase congelando!\n");
        }
        
        
        tentativas = 0;
    } while (palpite > 50 || palpite < 0); // NÃO FUNCIONA
}


void nivel_medio()
{

    numero = numeros_aleatorios(1,150);
    centralizar("- Nivel Medio -\n", 40);
    printf("\nO numero que estou pensando esta entre 1 e 150\n"
    "Boa sorte!\n");       
    
    do
    {
    
        printf("\nQual o seu palpite? ");
        scanf("%d", &palpite);
        
        if (palpite > 150 || palpite <= 0) // Quando chama o número válido, a mensagem de erro aparece
        {
            printf("\nErro: Opcao invalida!\n");
            while (getchar() != '\n');
        }
    

        tentativas += 1;
        
        // Acertou
        if (palpite == numero)
        {
            printf("\nAcertaste! Eu escolhi %d!\n", numero);
            printf("Parabens! Vou pensar em um numero mais dificil na proxima vez!\n");
            printf("Voce precisou de %d tentativas!\n", tentativas);
        
        }

        // O número absoluto é sempre positivo
        int diferenca = abs(palpite - numero);

        // Proximidade
        if (diferenca <= 2)
        {
            printf("Esta muuuuito quente!!!\n");
        } 

        else if (diferenca <= 5)
        {
            printf("Esta esquentando!\n");
        } 

        else if (diferenca <= 10)
        {
            printf("Esta frio!\n");
        }

        else
        {
            printf("Muuuito frio, quase congelando!\n");
        }
        
        
        tentativas = 0; //Se fosse jogar novamente, o contador somava todas as partidas

    } while (palpite > 150 || palpite <= 0); // NÃO FUNCIONA
}


void nivel_dificil()
{

    numero = numeros_aleatorios(1,300);
    centralizar("- Nivel Dificil -\n", 40);
    printf("\nO numero que estou pensando esta entre 1 e 300\n"
    "Boa sorte!\n");       
    
          
    do
    {

        printf("\nQual o seu palpite? ");
        scanf("%d", &palpite);
        
        if (palpite > 300 || palpite < 0) // Quando chama o número válido, a mensagem de erro aparece
        {
            printf("\nErro: Opcao invalida!\n");
            while (getchar() != '\n');
        }
        

        tentativas += 1; // contador de tentativas dos palpites

        // Acertou
        if (palpite == numero)
        {
            printf("\nAcertaste! Eu escolhi %d!\n", numero);
            printf("Parabens!!! Nao tem como vencer voce!\n");
            printf("Voce precisou de %d tentativas!\n", tentativas);
        }

        // O número absoluto é sempre positivo
        int diferenca = abs(palpite - numero);

        // Proximidade
        if (diferenca <= 2)
        {
            printf("Esta muuuuito quente!!!\n");
        } 

        else if (diferenca <= 5)
        {
            printf("Esta esquentando!\n");
        } 

        else if (diferenca <= 10)
        {
            printf("Esta frio!\n");
        }

        else
        {
            printf("Muuuito frio, quase congelando!\n");
        }
            
        tentativas = 0; //Para jogar novamente, sem o contador somar todas as partidas

    } while (palpite =! numero); // NÃO FUNCIONA
}