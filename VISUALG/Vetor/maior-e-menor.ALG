Algoritmo "maior-e-menor"

Var
   numeros: vetor[1..5] de inteiro
   maior, menor, i: inteiro

Inicio
   menor <- 99999

   para i de 1 ate 5 faca
   //La�o de repeti��o para ler os valores digitados. Inserindo cada um em um indice do vetor.
      escreva("Digite um n�mero: ")
      leia(numeros[i])

      se (numeros[i] > maior) entao
         maior <- numeros[i]
      fimse
      se(numeros[i] < menor) entao
         menor <- numeros[i]
      fimse
      //Estrutura condicional para verificar o maior e menor n�mero.
   fimpara

   limpatela

   para i de 1 ate 5 faca
   //La�o de repeti��o para imprimir os valores guardados no vetor.
      escreval("-> ", numeros[i])
   fimpara

   escreval()
   escreval("Maior n�mero: ", maior)
   escreva("Menor n�mero: ", menor)
   //Imprimindo o maior e menor n�mero.

Fimalgoritmo