Algoritmo "aposentadoria"

Var

   numeroFuncionario, anoNascimento, tempoTrabalhado, idadeFuncionario: inteiro
   anoAtual: inteiro

Inicio

   anoAtual <- 2023
   //Ano em que o c�digo foi feito.

   escreva("Digite seu c�digo: ")
   leia(numeroFuncionario)
   escreva("Digite o ano de nascimento: ")
   leia(anoNascimento)
   escreva("Digite o tempo de trabalho em anos: ")
   leia(tempoTrabalhado)
   //Coletando os dados

   idadeFuncionario <- anoAtual - anoNascimento
   //Opera��o para verificar a idade do usu�rio

   limpatela

   escreval("C�digo: ", numeroFuncionario)
   escreval("Idade: ", idadeFuncionario)
   escreval("Tempo de contribui��o: ", tempoTrabalhado)
   //Mostrando as informa��es digitadas pelo usu�rio.
   
   escreval()

   se (idadeFuncionario >= 65) ou (tempoTrabalhado >= 30) entao
      escreva("Requerer aposentadoria.")
   senao
      escreva("N�o requerer aposentadoria.")
   fimse
   //Condicional para verificar se o usu�rio esta apto ou n�o para a
   //aposentadoria.

Fimalgoritmo