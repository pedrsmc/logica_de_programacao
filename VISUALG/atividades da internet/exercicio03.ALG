Algoritmo "exercicio03"
//Escreva um algoritmo que leia 10 valores inteiros e positivos e
//a)encontre o maior valor;
//b)encontre o menor valor;
//c)calcule a média dos números lidos.
Var
   i, cont, numero, numeros, maiorValor, menorValor: inteiro
   media: real

Inicio

   para i de 1 ate 10 faca
      escreva("Digite um número: ")
      leia(numero)

      se(i = 1) entao
         maiorValor <- numero
         menorValor <- numero
         //O primeiro número digitado sempre vai ser o maior e o menor número.
      senao
         se(numero > maiorValor) entao
            maiorValor <- numero
         senao
            se(numero < menorValor) entao
               menorValor <- numero
            fimse
         fimse
         //Condicional para verificar o maior e o menor número.
      fimse
      
      numeros <- numero + numeros
      //Variável que recebe a soma dos números digitados.
   fimpara

   media <- numeros / i
   //Código para calcular a média de números.
   escreval()
   escreval("Maior valor: ", maiorValor)
   escreval("Menor valor: ", menorValor)
   escreva("Média: ", media:1:1)
   //Código para imprimir os valores na tela.



Fimalgoritmo