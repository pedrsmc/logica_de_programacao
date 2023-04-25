Algoritmo "vetor-notas-se"

Var
   notas: vetor[1..4] de real
   soma: real
   i: inteiro

Inicio
   para i de 1 ate 4 faca
   //Laço de repetição para receber os valores digitados.
      escreva("Digite a ", i, "° nota: ")
      leia(notas[i])

      soma <- notas[i] + soma
      //Soma das notas alocadas no vetor.
   fimpara

   escreval("---------------------")

   para i de 1 ate 4 faca
   //Laço de repetição para imprimir as notas digitadas.
      escreval(i, "° nota: ", notas[i])
   fimpara

   escreval()
   escreval("Média: ", (soma / i):2:1)
   //Imprimindo o resultado do calcúlo(média).

   se((soma / i) >= 7) entao
      escreva("APROVADO!")
   senao
      se((soma / i) >= 5) e ((soma / i) < 7) entao
         escreva("RECUPERAÇÃO!")
      senao
         escreva("REPROVADO!")
      fimse
   fimse
   //Condicional para verificar, se o aluno está reprovado ou aprovado.

Fimalgoritmo