Algoritmo "negativo-igual-0"

Var
   val: vetor[1..5] de inteiro
   i: inteiro
   resp: caractere

Inicio

   //La�o de repeti��o para receber os valores.
   para i <- 1 ate 5 faca
      escreva("Digite um valor: ")
      leia(val[i])

      //Condicional que atribui o valor 0 aos n�meros negativos.
      se(val[i] < 0) entao
         val[i] <- 0
      fimse
   fimpara

   escreval()

   //La�o de repeti��o para imprimir os valores do vetor.
   para i <- 1 ate 5 faca
      escreval("-> ", val[i])
   fimpara

Fimalgoritmo