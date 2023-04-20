Algoritmo "repeticao-media-nao"

Var

   resposta: caractere
   notas, nota, media: real
   qntdadeNotas: inteiro

Inicio
   escreva("Digite 'NAO' para finalizar o programa")
   escreval()

   repita
      qntdadeNotas <- qntdadeNotas + 1
      escreva("Digite sua ", qntdadeNotas, "° nota: ")
      leia(nota)

      notas <- nota + notas
      escreval()

      escreva("Deseja digitar outra nota?: ")
      leia(resposta)

      media <- notas / qntdadeNotas
   ate resposta = "NAO"

   limpatela

   escreva("A média total é ", media:2:1)

Fimalgoritmo
