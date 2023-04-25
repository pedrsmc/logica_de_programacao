Algoritmo "vetor-notas"

Var
   notas: vetor[1..3] de real
   soma: real
   i: inteiro

Inicio
   para i de 1 ate 3 faca
   //Laço de repetição para receber os valores digitados.
      escreva("Digite a ", i, "° nota: ")
      leia(notas[i])

      soma <- notas[i] + soma
      //Soma das notas alocadas no vetor.
   fimpara

   escreval("-----------------------------------")

   para i de 1 ate 3 faca
   //Laço de repetição para imprimir as notas digitadas.
      escreval(i, "° nota: ", notas[i])
   fimpara
   
   escreval()
   escreva("Média: ", (soma / i):2:1)
   //Imprimindo o resultado do calcúlo(média).
   
Fimalgoritmo