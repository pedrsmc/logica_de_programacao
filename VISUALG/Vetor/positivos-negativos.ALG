Algoritmo "positivos-negativos"

Var
   numeros: vetor[1..10] de real
   i: inteiro
   s, n: real

Inicio
   //La�o de repeti��o que armazena 10 n�meros.
   para i de 1 ate 10 faca
      escreva("Digite um n�mero positivo ou negativo: ")
      leia(numeros[i])

      //Estrutura condicional para verificar se o n�mero � positivo ou negativo.
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