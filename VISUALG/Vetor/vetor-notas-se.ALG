Algoritmo "vetor-notas-se"

Var
   notas: vetor[1..4] de real
   soma: real
   i: inteiro

Inicio
   para i de 1 ate 4 faca
   //La�o de repeti��o para receber os valores digitados.
      escreva("Digite a ", i, "� nota: ")
      leia(notas[i])

      soma <- notas[i] + soma
      //Soma das notas alocadas no vetor.
   fimpara

   escreval("---------------------")

   para i de 1 ate 4 faca
   //La�o de repeti��o para imprimir as notas digitadas.
      escreval(i, "� nota: ", notas[i])
   fimpara

   escreval()
   escreval("M�dia: ", (soma / i):2:1)
   //Imprimindo o resultado do calc�lo(m�dia).

   se((soma / i) >= 7) entao
      escreva("APROVADO!")
   senao
      se((soma / i) >= 5) e ((soma / i) < 7) entao
         escreva("RECUPERA��O!")
      senao
         escreva("REPROVADO!")
      fimse
   fimse
   //Condicional para verificar, se o aluno est� reprovado ou aprovado.

Fimalgoritmo