Algoritmo "maior_e_menor_numero"

Var

   numero1, numero2, numero3: real

Inicio

   escreva("Digite um n�mero: ")
   leia(numero1)
   escreva("Digite outro n�mero: ")
   leia(numero2)
   escreva("Digite um �ltimo n�mero: ")
   leia(numero3)
   //Solicitando o valor das vari�veis.
   
   escreval()
   
   escreval("N�meros digitados: ")
   escreval(numero1)
   escreval(numero2)
   escreval(numero3)
   //Mostrando os 3 n�meros digitados.
   
   escreval()

   se (numero1 > numero2) e (numero1 > numero3) entao
      escreval("Maior n�mero: ", numero1)
   fimse
   
   se (numero2 > numero1) e (numero2 > numero3) entao
      escreval("Maior n�mero: ", numero2)
   fimse
      
   se (numero3 > numero1) e (numero3 > numero2) entao
      escreval("Maior n�mero: ", numero3)
   fimse
   
   se (numero1 < numero2) e (numero1 < numero3) entao
      escreval("Menor n�mero: ", numero1)
   fimse
      
   se (numero2 < numero1) e (numero2 < numero3) entao
      escreval("Menor n�mero: ", numero2)
   fimse
      
   se (numero3 < numero2) e (numero3 < numero1) entao
      escreval("Menor n�mero: ", numero3)
   fimse
   //Validando para verificar o maior e menor n�mero.

Fimalgoritmo