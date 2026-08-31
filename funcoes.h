// Criar a biblioteca
#ifndef LIB_TEST_H 
#define LIB_TEST_H
 
// Importar biblioteca criada
#include "prototipos.h" 
#include "niveis.h"

// Função para as linhas
void linha(char c, int qtd)
{
    if (c == ' ' || qtd <= 0) 
    {
        return; 
    }

    printf("\n");
    for (int i = 0; i < qtd; i++)
    {    
        printf("%c", c);
    }    
        
    printf("\n");
    
}

// Função para centralizar a palavra
void centralizar(char *texto, int largura)
{
    if (*texto == ' ' || largura <= 0) 
    {
        return; 
    }
    
    // Tamanho da palavra
    int tamanho = strlen(texto);
    if (tamanho >= largura)
    {
        //Se o texto for maior que a largura, vai imprimir direto
        printf("%s", texto); 
        return;
    }

    // calcula os espaços
    int espacos = (largura - tamanho) / 2;
    printf("\n");
    printf("%*s%s%*s", espacos, "", texto, largura - tamanho - espacos, "");
}

// Função para o cabeçalho
void cabecalho()
{
    system("clear");  
    printf("\033[31m");
    linha('-', 50);
    printf("\033[0m");
    centralizar("Adivinhas? ;]", 50);
    centralizar("3.0\n", 50);
    printf("\033[31m");
    linha('-', 50);
    printf("\033[0m");
    printf("\n");
    Sleep(1000); 
}

//Função para os números aleatórios - MAX 32767
int numeros_aleatorios(int min, int max)
{
    // Retorna a hora atual em segundos e garante que o gerador dê resultados diferentes a casa vez que for executado
    srand(time(NULL));

    // calcula a amplitude do intervalo, ou seja, entre o min e o max especificado.
    int gerar_numero = (rand() % (max - min + 1) + min);

    //printf("\n");

    return gerar_numero;
}


void desafio()
{
    printf("\033[31m");
    centralizar("- Desafio -", 50);
    printf("\033[0m\n\n");
    printf("\nVoce consegue adivinhar o numero que estou pensando\n");
    centralizar("em poucas tentativas?\n", 50);
    printf("\n");
    Sleep(1000); 

}


void menu ()
{
    int opcao = 5;

    Sleep(1000); 

    do
    {
        printf("\n\033[35m----> MENU\033[0m\n"
        "\n\033[32m[ 1 ] Facil\033[0m\n"    
        "\033[33m[ 2 ] Medio\n\033[0m"
        "\033[31m[ 3 ] Dificil\n\033[0m"
        "\n\033[35m[ 0 ] SAIR\033[0m\n");

        printf("\nVamos comecar? \nEscolha uma opcao! ");
        scanf("%i", &opcao);
            
        if (opcao < 0 || opcao > 3)
        {
            printf("Erro: Opcao invalida!\n");
            while (getchar() != '\n'); // descarta caracteres inválidos
        } 
                          
        if (opcao == 1)
        {
           nivel_facil();
        }

        else if (opcao == 2)
        {
           
            nivel_medio();
        }
        
        else if (opcao == 3)
        {
            nivel_dificil();
        }
        
        else if (opcao == 0)
        {
            printf("\n\033[94mVoce escolheu sair!");
            printf("\nAte a proxima! :]");
            printf("\033[0m\n");
            Sleep(5000);
            system("clear");    
            break;
        }
    


    } while (opcao =! 0);    

}

#endif