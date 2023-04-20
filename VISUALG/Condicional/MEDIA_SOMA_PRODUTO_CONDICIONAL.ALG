Algoritmo "media_soma_produto_condicional"

Var

   media: real
   soma, produto, valorElemento1, valorElemento2, qntdadeElementos: inteiro

Inicio

   qntdadeElementos <- 2

   escreva("Digite um valor: ")
   leia(valorElemento1)
   escreva("Digite outro valor: ")
   leia(valorElemento2)

   soma <- valorElemento1 + valorElemento2
   produto <- valorElemento1 * valorElemento2
   media <- soma / qntdadeElementos

   limpatela

   escreval("Média: ", media:2:1)
   escreval("Soma: ", soma)
   escreval("Produto: ", produto)

   se (valorElemento1 = valorElemento2) e (soma > 10) entao
      escreval("Os números são iguais e maior que 10.")
   senao
      escreval("Os números são iguais.")
   fimse

Fimalgoritmo
