Algoritmo "vetor"

Var
   n: vetor[1..5] de inteiro
   i: inteiro

Inicio
   escreval("Preenchendo o vetor...")

   para i de 1 ate 5 faca
      escreva("Digite um n�mero: ")
      leia(n[i])
   fimpara
   
   escreval()
   escreval("Exibindo o vetor...")

   para i de 1 ate 5 faca
      escreval("Posi��o", i, ": ", n[i])
   fimpara

Fimalgoritmo