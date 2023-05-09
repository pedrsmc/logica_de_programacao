Algoritmo "matriz-media"

Var
   notas: vetor[1..2, 1..3] de real
   i, j: inteiro
   medias: vetor[1..2] de real
   soma: real

Inicio
   para i de 1 ate 2 faca
      escreval()
      escreval(i, "° semestre:")

      para j de 1 ate 3 faca
         escreva("Digite o valor da ", j, "° nota: ")
         leia(notas[i,j])

         soma <- soma + notas[i,j]
      fimpara

      medias[i] <- soma / j
      soma <- 0
   fimpara

   limpatela

   para i de 1 ate 2 faca
      escreval(i, "° SEMESTRE:")
      escreval()

      para j de 1 ate 3 faca
         escreval(j, "° nota:",notas[i,j])
      fimpara
      escreval()
      escreval(" Média: ", medias[i]:2:1)
      escreval()
   fimpara

Fimalgoritmo