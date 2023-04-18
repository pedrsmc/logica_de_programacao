Algoritmo "par-ou-impar"

Var
   i, numero, contPar, contImpar: inteiro

Inicio
   para i de 1 ate 5 faca
      escreva("Digite um número: ")
      leia(numero)

      se(numero % 2 = 0) entao
         contPar <- contPar + 1
      senao
         contImpar <- contImpar + 1
      fimse
   fimpara

   escreval()
   escreval("Par: ", contPar)
   escreva("Impar: ", contImpar)
Fimalgoritmo