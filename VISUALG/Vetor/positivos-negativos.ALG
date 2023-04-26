Algoritmo "positivos-negativos"

Var
   numeros: vetor[1..10] de real
   i: inteiro
   s, n: real

Inicio
   //Laço de repetição que armazena 10 números.
   para i de 1 ate 10 faca
      escreva("Digite um número positivo ou negativo: ")
      leia(numeros[i])

      //Estrutura condicional para verificar se o número é positivo ou negativo.
      se(numeros[i] >= 0) entao
         s <- numeros[i] + s
      senao
         n <- n + 1
      fimse
   fimpara

   limpatela

   //Imprimindo os valores na tela.
   escreval("Soma dos positivos: ", s)
   escreva("Quantidade de negativos: ", n)

Fimalgoritmo