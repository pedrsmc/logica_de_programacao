Algoritmo "lista-pessoas"

Var
   idades: vetor[1..5] de inteiro
   nomes: vetor[1..5] de caractere
   //Vetores que armazenam nome e idade.
   i: inteiro
   //Indice.

Inicio
   para i de 1 ate 2 faca
   //Laço de repetição para ler o valores digitados.
      escreva("Nome: ")
      leia(nomes[i])
      escreva("Idade: ")
      leia(idades[i])
      limpatela
   fimpara

   limpatela
   //Limpando tela.

   escreval("LISTAGEM")
   escreval("=====================")

   para i de 1 ate 5 faca
   //Laço de repetição para imprimir o valores digitados.
      escreval(i,"° Pessoa:")
      escreval("Nome: ", nomes[i])
      escreval("Idade: ", idades[i])
      escreval("---------------------")
   fimpara
   
Fimalgoritmo