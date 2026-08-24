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
    linha('-', 50);
    centralizar("Adivinhas? ;]", 50);
    centralizar("3.0\n", 50);
    linha('-', 50);
}

//Função para os números aleatórios - MAX 32767
int numeros_aleatorios(int min, int max)
{
    // Retorna a hora atual em segundos e garante que o gerador dê resultados diferentes a casa vez que for executado
    srand(time(NULL));

    // calcula a amplitude do intervalo, ou seja, entre o min e o max especificado.
    int gerar_numero = (rand() % (max - min + 1) + min);

    printf("\n");

    return gerar_numero;
}


void iniciar_jogo()
{
    printf(" - Jogo de Adivinhar -");
    printf("Você consegue adivinhar o número que estou pensando antes que o tempo acabe?");

}

void menu ()
{
    
    int opcao = 5;

    do
    {
        printf("\n>>>>> Menu\n"
        "\n[ 1 ] Facil\n"    
        "[ 2 ] Medio\n"
        "[ 3 ] Dificil\n"
        "[ 0 ] SAIR\n");

        printf("\nVamos comecar? \nEscolha uma opcao! ");
        scanf("%i", &opcao);
            
            if (opcao < 0 || opcao > 3) {
                printf("\nErro: Opcao invalida!\n"); // NÃO FUNCIONA, quando chama o número válido, a mensagem de erro aparece
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
            printf("\nVoce escolheu sair!");
            printf("\nAte a proxima! :]");
            break;
        }
        
        } while (opcao > 3 || opcao < 0);    

}
            

#endif