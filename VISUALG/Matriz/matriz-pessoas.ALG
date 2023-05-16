Algoritmo "matriz-pessoas"

Var
   i: inteiro
   nomes: vetor[1..2] de caractere
   idades: vetor[1..2] de inteiro
   medidas: vetor[1..2, 1..2] de real
   
Inicio
   para i de 1 ate 2 faca
      escreva(i, "° PESSOA:")
      escreval()
      escreva("Digite o nome: ")
      leia(nomes[i])
      escreva("Digite a idade: ")
      leia(idades[i])
      escreva("Digite o peso: ")
      leia(medidas[i,1])
      escreva("Digite a altura: ")
      leia(medidas[i,2])
   fimpara

   limpatela

   para i de 1 ate 2 faca
      escreva(i, "° PESSOA:")
      escreval()
      escreval("Digite o nome: ", nomes[i])
      escreval("Digite a idade: ", idades[i])
      escreval("Peso: ", medidas[i,1])
      escreval("Altura: ", medidas[i,2])
      escreval()
   fimpara

Fimalgoritmo