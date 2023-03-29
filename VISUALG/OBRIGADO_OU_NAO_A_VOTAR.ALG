Algoritmo "aposentadoria"

Var

   numeroFuncionario, anoNascimento, tempoTrabalhado, idadeFuncionario: inteiro
   anoAtual: inteiro

Inicio

   anoAtual <- 2023

   escreva("Digite seu código: ")
   leia(numeroFuncionario)
   escreva("Digite o ano de nascimento: ")
   leia(anoNascimento)
   escreva("Digite o tempo de trabalho em anos: ")
   leia(tempoTrabalhado)

   idadeFuncionario <- anoAtual - anoNascimento

   limpatela

   escreval("Código: ", numeroFuncionario)
   escreval("Idade: ", idadeFuncionario)
   escreval("Tempo de contribuição: ", tempoTrabalhado)

   escreval()

   se (idadeFuncionario >= 65) ou (tempoTrabalhado >= 30) entao
      escreva("Requerer aposentadoria.")
   senao
      escreva("Não requerer aposentadoria.")
   fimse

Fimalgoritmo