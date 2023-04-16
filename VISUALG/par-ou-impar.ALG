Algoritmo "par-ou-impar"

Var

   numero, i, contImpar, contPar: inteiro

Inicio

   para i de 1 ate 5 faca
      escreva("Digite um número inteiro: ")
      leia(numero)

      se((numero % 2 = 0)) entao
         contPar <- contPar + 1
      senao
         contImpar <- contImpar + 1
      fimse

   fimpara

   escreval()

   escreval("Números pares: ", contPar)
   escreva("Números ímpares: ", contImpar)

Fimalgoritmo
