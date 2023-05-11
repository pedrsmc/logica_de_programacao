Algoritmo "matriz-pessoas"

Var
   i, j: inteiro
   nomes: vetor[1..2, 1..1] de caractere
   idades: vetor[1..2, 1..1] de inteiro
   pesos: vetor[1..2, 1..1] de real
   alturas: vetor[1..2, 1..1] de real
Inicio
   para i de 1 ate 2 faca
      escreva(i, "° PESSOA:")
      escreval()

      para j de 1 ate 1 faca
         escreva("Digite o nome: ")
         leia(nomes[i,j])
         escreva("Digite a idade: ")
         leia(idades[i,j])
         escreva("Digite o peso: ")
         leia(pesos[i,j])
         escreva("Digite a altura: ")
         leia(alturas[i,j])
      fimpara
   fimpara

   limpatela

   para i de 1 ate 2 faca
      escreva(i, "° PESSOA:")
      escreval()

      escreval("Digite o nome: ", nomes[i,j])
      escreval("Digite a idade: ", idades[i,j])

      para j de 1 ate 1 faca
         escreval("Peso: ", pesos[i,j])
         escreval("Altura: ", alturas[i,j])
      fimpara
      escreval()
   fimpara

Fimalgoritmo