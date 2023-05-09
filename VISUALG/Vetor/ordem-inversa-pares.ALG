Algoritmo "ordem-inversa-pares"

Var
   value: vetor[1..6] de inteiro
   i: inteiro


Inicio
   //Estrutura de repetição que se repete 6 vezes.
   para i de 1 ate 6 faca
      //Outro laço que se repete sempre um número impar é digitado.
      repita
         //Solicitando um valor par inteiro.
         escreva("Digite um número par inteiro: ")
         leia(value[i])

         se(value[i] % 2 <> 0) entao
            limpatela
            escreval("Digite apenas números pares!")
         fimse

      ate value[i] % 2 = 0 faca

   fimpara

   escreval()

   escreval("Números digitados em ordem inversa:")

   //Mais um laço, agora pra mostrar os valores na ordem inversa.
   para i de 6 ate 1 passo -1 faca
      escreval("-> ", value[i])
   fimpara


Fimalgoritmo