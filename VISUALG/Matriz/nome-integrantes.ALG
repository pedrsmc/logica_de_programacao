Algoritmo "nomes-integrantes"
Var
   bandas: vetor[1..3, 1..5] de caractere
   nomesB: vetor[1..3] de caractere
   i, j: inteiro


Inicio
   para i de 1 ate 3 faca
      limpatela
      escreva("Digite o nome da", i, "° banda: ")
      leia(nomesB[i])
      escreval()
      para j de 1 ate 5 faca
         escreva("Digite o nome do", j, "° integrante da banda: ")
         leia(bandas[i,j])
      fimpara
   fimpara

   limpatela

   para i de 1 ate 3 faca
      escreval(nomesB[i],":")
      escreval()
      para j de 1 ate 5 faca
         escreval(bandas[i,j])
      fimpara
      escreval()
   fimpara

Fimalgoritmo