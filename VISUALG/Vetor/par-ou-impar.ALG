Algoritmo "par-ou-impar"

Var
   numeros: vetor[1..6] de inteiro
   par, impar, i: inteiro


Inicio
   para i de 1 ate 6 faca
      escreva("Digite um número: ")
      leia(numeros[i])

      se((numeros[i] % 2) = 0) entao
         par <- par + 1
      senao
         impar <- impar + 1
      fimse
   fimpara

   limpatela

   para i de 1 ate 6 faca
      escreval("-> ", numeros[i])
   fimpara

   escreval()
   escreval("Pares: ", par)
   escreval("Ímpares: ", impar)

Fimalgoritmo