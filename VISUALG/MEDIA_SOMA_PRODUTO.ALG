Algoritmo "media_soma_produto"

Var

   media: real
   soma, produto, valorElemento1, valorElemento2, qntdadeElementos: inteiro

Inicio

   qntdadeElementos <- 2

   escreva("Digite um valor: ")
   leia(valorElemento1)
   escreva("Digite outro valor: ")
   leia(valorElemento2)

   media <- (valorElemento1 + valorElemento2) / qntdadeElementos
   soma <- valorElemento1 + valorElemento2
   produto <- valorElemento1 * valorElemento2

   limpatela

   escreval("Média: ", media:2:1)
   escreval("Soma: ", soma)
   escreval("Produto: ", produto)

   se (valorElemento1 > valorElemento2) entao
      escreval("Maior valor: ", valorElemento1)
      escreval("Menor valor: ", valorElemento2)

   senao
      se (valorElemento2 > valorElemento1) entao
         escreval("Maior valor: ", valorElemento2)
         escreval("Menor valor: ", valorElemento1)

      senao
         escreval("Os valores são iguais.")

      fimse

   fimse


Fimalgoritmo