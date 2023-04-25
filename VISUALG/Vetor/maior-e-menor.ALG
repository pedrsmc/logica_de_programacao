Algoritmo "maior-e-menor"

Var
   numeros: vetor[1..5] de inteiro
   maior, menor, i: inteiro

Inicio
   menor <- 99999

   para i de 1 ate 5 faca
   //Laço de repetição para ler os valores digitados. Inserindo cada um em um indice do vetor.
      escreva("Digite um número: ")
      leia(numeros[i])

      se (numeros[i] > maior) entao
         maior <- numeros[i]
      fimse
      se(numeros[i] < menor) entao
         menor <- numeros[i]
      fimse
      //Estrutura condicional para verificar o maior e menor número.
   fimpara

   limpatela

   para i de 1 ate 5 faca
   //Laço de repetição para imprimir os valores guardados no vetor.
      escreval("-> ", numeros[i])
   fimpara

   escreval()
   escreval("Maior número: ", maior)
   escreva("Menor número: ", menor)
   //Imprimindo o maior e menor número.

Fimalgoritmo