Algoritmo "maior_e_menor_numero"

Var

   numero1, numero2, numero3: real

Inicio

   escreva("Digite um número: ")
   leia(numero1)
   escreva("Digite outro número: ")
   leia(numero2)
   escreva("Digite um último número: ")
   leia(numero3)
   //Solicitando o valor das variáveis.
   
   escreval()
   
   escreval("Números digitados: ")
   escreval(numero1)
   escreval(numero2)
   escreval(numero3)
   //Mostrando os 3 números digitados.
   
   escreval()

   se (numero1 > numero2) e (numero1 > numero3) entao
      escreval("Maior número: ", numero1)
   fimse
   
   se (numero2 > numero1) e (numero2 > numero3) entao
      escreval("Maior número: ", numero2)
   fimse
      
   se (numero3 > numero1) e (numero3 > numero2) entao
      escreval("Maior número: ", numero3)
   fimse
   
   se (numero1 < numero2) e (numero1 < numero3) entao
      escreval("Menor número: ", numero1)
   fimse
      
   se (numero2 < numero1) e (numero2 < numero3) entao
      escreval("Menor número: ", numero2)
   fimse
      
   se (numero3 < numero2) e (numero3 < numero1) entao
      escreval("Menor número: ", numero3)
   fimse
   //Validando para verificar o maior e menor número.

Fimalgoritmo