 // Criar a biblioteca
 #ifndef LIB_TEST_H 
 #define LIB_TEST_H

 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 #include <time.h>

 // Importar biblioteca criada
 #include "prototipos.h" 

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
    linha('-', 40);
    centralizar("Adivinha 3.0\n", 40);
    linha('-', 40);
}

//Função para o tempo - MAX 32767
void tempo()
{
    srand(time(NULL));
    int random = rand();

    printf("%d", rand());
}
#endif