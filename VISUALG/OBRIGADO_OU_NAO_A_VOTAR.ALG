Algoritmo "aposentadoria"

Var

   numeroFuncionario, anoNascimento, tempoTrabalhado, idadeFuncionario: inteiro
   anoAtual: inteiro

Inicio

   anoAtual <- 2023
   //Ano em que o código foi feito.

   escreva("Digite seu código: ")
   leia(numeroFuncionario)
   escreva("Digite o ano de nascimento: ")
   leia(anoNascimento)
   escreva("Digite o tempo de trabalho em anos: ")
   leia(tempoTrabalhado)
   //Coletando os dados

   idadeFuncionario <- anoAtual - anoNascimento
   //Operação para verificar a idade do usuário

   limpatela

   escreval("Código: ", numeroFuncionario)
   escreval("Idade: ", idadeFuncionario)
   escreval("Tempo de contribuição: ", tempoTrabalhado)
   //Mostrando as informações digitadas pelo usuário.
   
   escreval()

   se (idadeFuncionario >= 65) ou (tempoTrabalhado >= 30) entao
      escreva("Requerer aposentadoria.")
   senao
      escreva("Não requerer aposentadoria.")
   fimse
   //Condicional para verificar se o usuário esta apto ou não para a
   //aposentadoria.

Fimalgoritmo