#include "prototipos.h" 

int opcao = 5;
int numero = 0;
int palpite = 0;
int tentativas = 0; 
int tentativas_invalidas = 0;  
int minutos;
int segundos;

void nivel_facil()
{

    numero = numeros_aleatorios(1,50);
    printf("\n");
    centralizar("- Nivel facil -\n", 40);
    printf("\n");
    printf("\nO numero que estou pensando esta entre 1 e 50\n"
    "Boa sorte!\n");
    printf("%d", numero);
    
    tentativas = 0;

    do
    {
        printf("\nQual o seu palpite? ");
        scanf("%d", &palpite);

        if (palpite > 50 || palpite < 0) 
        {
            printf("Erro: Opcao invalida!\n");
            while (getchar() != '\n');
            tentativas_invalidas += 1;
        }
    
        
        tentativas += 1;
        
        // Acertou
        if (palpite == numero)
        {
            printf("\nAcertaste! Eu escolhi %d!\n", numero);
            printf("Parabens!\n");
            printf("\nVoce precisou de %d tentativas!\n", tentativas);

            if (tentativas_invalidas > 0)
                printf("Sendo %d tentativa(s) invalida(s)!\n", tentativas_invalidas);
            
            if (tentativas < 5)
                printf("Vou pensar em um numero mais dificil na proxima vez!\n");    
        
        }

        // O número absoluto é sempre positivo
        int diferenca = abs(palpite - numero);

        if (palpite >= 0 || palpite <= 50)

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
            
    } while (palpite != numero); 
    Sleep(6000);
    system("clear");
}


void nivel_medio()
{

    numero = numeros_aleatorios(1,150);
    printf("\n");
    centralizar("- Nivel Medio -\n", 40);
    printf("\n");
    printf("\nO numero que estou pensando esta entre 1 e 150\n"
    "Boa sorte!\n");

    tentativas = 0;

    do
    {
        printf("\nQual o seu palpite? ");
        scanf("%d", &palpite);
        
        if (palpite > 150 || palpite < 0) 
        {
            printf("Erro: Opcao invalida!\n");
            while (getchar() != '\n');
            tentativas_invalidas += 1;
        }
    

        tentativas += 1;
        
        // Acertou
        if (palpite == numero)
        {
            printf("\nAcertaste! Eu escolhi %d!\n", numero);
            printf("Parabens!\n");
            printf("\nVoce precisou de %d tentativas!\n", tentativas);

            if (tentativas_invalidas > 0)
                printf("Sendo %d tentativa(s) invalida(s)!\n", tentativas_invalidas);
            
            if (tentativas < 10)
                printf("Vou pensar em um numero mais dificil na proxima vez!\n");
        
        }

        // O número absoluto é sempre positivo
        int diferenca = abs(palpite - numero);

        if (palpite != numero)
            if (palpite >= 0)
                if (palpite <= 150)

                    // Proximidade
                    if (diferenca <= 2)
                    {
                        printf("Ta pegando fogo!!!\n");
                    } 

                    else if (diferenca <= 5)
                    {
                        printf("Esta muuuuito quente!!!\n");
                    } 

                    else if (diferenca <= 10)
                    {
                        printf("Esta esquentando!\n");
                    } 

                    else if (diferenca <= 20)
                    {
                        printf("Esta frio!\n");
                    }

                    else if (diferenca >= 50)  
                    {
                        if (palpite < numero)
                        {
                            printf("Esta mais acima!\n");
                        }

                        else if (palpite > numero)
                        {    
                            printf("Esta mais abaixo!\n");
                        }
                    }

                    else
                    {
                        printf("Muuuito frio, quase congelando!\n");
                    }
                    
    } while (palpite != numero); 
    Sleep(6000);
    system("clear");    
}


void nivel_dificil()
{

    numero = numeros_aleatorios(1,300);
    printf("\n");
    centralizar("- Nivel Dificil -\n", 40);
    printf("\n");
    printf("\nO numero que estou pensando esta entre 1 e 300\n"
    "Boa sorte!\n");

    tentativas = 0;

    do
    {
        printf("\nQual o seu palpite? ");
        scanf("%d", &palpite);
        
        if (palpite > 300 || palpite < 0) 
        {
            printf("Erro: Opcao invalida!\n");
            while (getchar() != '\n');
            tentativas_invalidas += 1;
        }
    

        tentativas += 1;
        
        // Acertou
        if (palpite == numero)
        {
            printf("\nAcertaste! Eu escolhi %d!\n", numero);
            printf("Parabens!\n");
            printf("\nVoce precisou de %d tentativas!\n", tentativas);

            if (tentativas_invalidas > 0)
                printf("Sendo %d tentativa(s) invalida(s)!\n", tentativas_invalidas);
            
            if (tentativas < 10)
                printf("Vou pensar em um numero mais dificil na proxima vez!\n");
        
        }

        // O número absoluto é sempre positivo
        int diferenca = abs(palpite - numero);

        if (palpite != numero)
            if (palpite >= 0)
                if (palpite <= 300)

                    // Proximidade
                    if (diferenca <= 2)
                    {
                        printf("Ta pegando fogo!!!\n");
                    } 

                    else if (diferenca <= 5)
                    {
                        printf("Esta muuuuito quente!!!\n");
                    } 

                    else if (diferenca <= 15)
                    {
                        printf("Esta esquentando!\n");
                    } 

                    else if (diferenca <= 20)
                    {
                        printf("Esta frio!\n");
                    }

                    else if (diferenca >= 50)  
                    {
                        if (palpite < numero)
                        {
                            printf("Esta mais acima!\n");
                        }

                        else if (palpite > numero)
                        {    
                            printf("Esta mais abaixo!\n");
                        }
                    }
                    
                    else
                    {
                        printf("Muuuito frio, quase congelando!\n");
                    }
                    
    } while (palpite != numero); 
    Sleep(6000);
    system("clear");
}