## Sessão 1 – 18/08/2026
 
**Funcionalidades implementadas hoje:**  
 
Nenhuma

**Maior dificuldade encontrada e como resolvi (ou não resolvi):** 

Dedicir o projeto e como fazer

**Próximo passo planeado:** 

Aprender sobre o ncurses e implementar no projeto

 
**Linhas de código escritas hoje (estimativa):**

0



## Sessão 2 – 20/08/2026 
 
**Funcionalidades implementadas hoje:**  
 
Nenhuma

**Maior dificuldade encontrada e como resolvi (ou não resolvi):** 

O VS CODE não está reconhecendo as funcionalidade do ncurses (não resolvido)

**Próximo passo planeado:** 
Iniciar o projeto

 
**Linhas de código escritas hoje (estimativa):**
0




## Sessão 3 – 21/08/2026 - 9:00 até 13:00
 
**Funcionalidades implementadas hoje:** 

Funções de linha, centralização de texto e cabeçalho prontos

 
**Maior dificuldade encontrada e como resolvi (ou não resolvi):** 

NCURSES não funciona (não resolvido)
Estava com dois tipos de projeto na cabeça, mas o segundo que pensei, era demasiado díficil para mim, pois não tenho tantos conhecimentos da linguagem.
De todo modo, ainda busquei uma tentativa ao qual foi sem sucesso nos avanços e voltei para tras, para o primeiro plano.

 
**Próximo passo planeado:** 
 
Entrar na lógica do jogo
 

**Linhas de código escritas hoje (estimativa):**

120 linhas (65 escritas que estão no projeto e 55 eliminadas)




## Sessão 4 – 21/08/2026 - 21:58 até 22:43

**Funcionalidades implementadas hoje:**  
 
Bibliotecas funcoes1 e prototipos criadas
Função tempo em andamento para gerar os números aleatórios

**Maior dificuldade encontrada e como resolvi (ou não resolvi):**

Gerar os números de modo aleátorio (em andamento)

**Próximo passo planeado:** 

Concluir a função tempo e avançar para as dificuldades no jogo


**Linhas de código escritas hoje (estimativa):**

30



## Sessão 5 – 22/08/2026 - 13:28 até 14:30

**Funcionalidades implementadas hoje:**  
 
Alterei o nome da função tempo para números aleatórios, porque estava me fazendo confusão.
ALterei o cabeçalho também.


**Maior dificuldade encontrada e como resolvi (ou não resolvi):**

Colocar o gerador de números para funcionar saindo do mesmo ponto, pois estava sempre gerando números próximos, ex: 996, 998...


**Próximo passo planeado:** 

Lógica dos níveis


**Linhas de código escritas hoje (estimativa):**

60


## Sessão 6 – 23/08/2026 - 13:37 até 15:16 

**Funcionalidades implementadas hoje:**  
 
Lógica do jogo fácil quase completa
Função para o menu e para iniciar o jogo

**Maior dificuldade encontrada e como resolvi (ou não resolvi):**

Colocar as dicas se está acima ou abaixo, muito perto ou muito longe

**Próximo passo planeado:** 

Finalizar a lógica do jogo fácil, para poder ir para os outros níveis


**Linhas de código escritas hoje (estimativa):**
120 (escritas e apagadas)



## Sessão 7 – 23/08/2026 - 21:00 até 22:49

**Funcionalidades implementadas hoje:**  
 
Acrescentei a dica de maior, menor e proximidade. Mas resolvi retirar o maior e menor, deixando apenas a proximidade.


**Maior dificuldade encontrada e como resolvi (ou não resolvi):**

Encontrar como fazer a dica da proximidade, tive que pesquisar, pois não consegui fazê-la.
O "while != 0" não funciona, tive que colocar "opcao == 0" para o programa poder encerrar

**Próximo passo planeado:** 

Verificar o while
Terminar a lógica do nível fácil e partir para as próximas, que acredito que serão mais fáceis
Pedir o nome do jogador e exibir um placar, um ranking
Verificar o ncurses para incluir cor ao programa

**Linhas de código escritas hoje (estimativa):**

60 escritas e muitas apagadas





## Sessão 8 – 24/08/2026 - 21:00 até 23:00

**Funcionalidades implementadas hoje:**  
 
Niveis facil, medio e dificil concluidos, precisando apenas de ajustes
Biblioteca niveis criada

**Maior dificuldade encontrada e como resolvi (ou não resolvi):**

A validação de número negativou ou acima das opções estava a dar erro (resolvido)
Mensagem de erro no palpite, sai junto com a dica de proximidade e encerra o que deveria ser um loop (não resolvido) 
Mensagem de erro em opção, saia junto com a opção válida, mesmo a lógica estando certa. Quando adicionei os outros niveis, o erro não apareceu mais.

**Próximo passo planeado:** 

Ajustar os niveis, pois está encerrando ao invés de manter o loop


**Linhas de código escritas hoje (estimativa):**

Mais de 200, escritas e apagadas


## Sessão 9 – 29/08/2026 - 21:50 até 02:02 - 30/08/2026 

**Funcionalidades implementadas hoje:**  

System clear para limpar a tela após vencer uma partida
Sleep para aparecer mais lentamente as mensagens e principalmente na mensagem de vitória, antes de limpar a tela
Dicas de "mais acima" ou "mais abaixo" nos niveis médio e difícil


**Maior dificuldade encontrada e como resolvi (ou não resolvi):**
Quando chama o número válido, a mensagem de erro aparece. O do while estava com o parametro incorreto (resolvido)
Menu parou de funcionar: acabei por perceber que funcionava, mas não aparecia mensagem para ser digitado novamente a opção, porém podia ser colocada a opção (resolvido)
Ncurses ainda sem funcionar, erro diz que não existe diretório
O termo "if (palpite >= 0 || palpite <= 50), não funcionava. Mostrava outros else if, quando era para mostrar apenas um. 

Exemplo: 
Qual o seu palpite? -1
Erro: Opcao invalida!
Muuuito frio, quase congelando!

Precisei fazer dessa forma, para o código funcionar do jeito que eu queria.
if (palpite != numero)
    if (palpite >= 0)
        if (palpite <= 50)


**Próximo passo planeado:** 

escrever o READ-ME
Tentar incluir o Ncurses


**Linhas de código escritas hoje (estimativa):**
120 - escritas, apagadas e alteradas