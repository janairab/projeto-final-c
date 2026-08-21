#include <stdio.h>
#include <string.h>
//#include <ncurses.h>

void linha(char c, int qtd);
void centralizar(char *texto, int largura);
void cabecalho(void);

int main(){
   
    cabecalho();

    return 0;
    
}


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

void centralizar(char *texto, int largura)
{
    if (*texto == ' ' || largura <= 0) 
    {
        return; 
    }

    int tamanho = strlen(texto);
    if (tamanho >= largura)
    {
        //Se o texto for maior que a largura, vau imprimir direto
        printf("%s", texto); 
        return;
    }

    // calcula os espaços
    int espacos = (largura - tamanho) / 2;
    printf("\n");
    printf("%*s%s%*s", espacos, "", texto, largura - tamanho - espacos, "");
}


void cabecalho()
{
    linha('-', 40);
    centralizar("Adivinha 3.0\n", 40);
    linha('-', 40);
}