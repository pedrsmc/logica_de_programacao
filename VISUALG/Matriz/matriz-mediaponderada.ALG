Algoritmo "matriz-mediaponderada"

Var
   notas: vetor[1..3, 1..3] de real
   i, j: inteiro
   medias: vetor[1..3] de real
   soma, a: real
   disciplinas: vetor[1..3] de caractere
   pesos: vetor[1..3] de real

Inicio
   //Inicio da matriz.
   para i de 1 ate 3 faca
      limpatela
      soma <- 0

      //Armazenando o valor dos pesos de cada nota.
      pesos[1] <- 3
      pesos[2] <- 3
      pesos[3] <- 4
      
      //Armazenando o nomes das disciplinas que correspondem as colunas da matriz.
      escreva("Digite o nome da disciplina: ")
      leia(disciplinas[i])
      escreval()

      //Recebendo o valor de 3 notas de cada disciplina.
      para j de 1 ate 3 faca
         escreva("Digite a ", j,"° nota: ")
         leia(notas[i,j])

         //Soma para verificar a a média ponderada.
         soma <- (notas[i,1] * pesos[1]) + (notas[i,2] * pesos[2]) + (notas[i,3] * pesos[3])
      fimpara
      //Guardando os valores da média de cada disciplina em um vetor.
      medias[i] <- soma / (pesos[1] + pesos[2] + pesos[3])
   fimpara

   limpatela

   //Laço de repetição para imprimir as três disciplinas, com suas respectivas notas e médias.
   para i de 1 ate 3 faca
      escreval(disciplinas[i],": ")
      escreval()

      para j de 1 ate 3 faca
         escreval(j, "° notas: ", notas[i,j])
      fimpara

      escreval()
      escreval("Média: ", medias[i]:2:1)
      escreval()
   fimpara

Fimalgoritmo