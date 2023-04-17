Algoritmo "exercicio04"
//Foi feita uma pesquisa entre os 1000 habitantes de uma região para coletar os
//seguintes dados: sexo, idade e altura.
//Escreva um algoritmo que leia as informações coletadas e mostre as seguintes
//informações(usando repita-até):
//a)média da idade do grupo;
//b)média da altura das mulheres;
//c)média da idade dos homens;
//d)percentual de pessoas com idade entre 18 e 35 anos.
Var

   mediaIdade, mediaAlt, mediaIdadeH, percentIdade, altura, somaAlt: real
   idade, somaIdade, somaIdadeH, sexo, cont, contH, contF, entre18e35: inteiro

Inicio
   repita
      cont <- cont + 1
      //Contador de cadastros geral.
      escreval("Cadastro N° ", cont)
      escreval()
      escreva("Digite o sexo (0 - Feminino 1 - Masculino): ")
      leia(sexo)
      //Verificando o sexo.

      se(sexo = 0) entao
         contF <- contF + 1
         //Contador de pessoas do sexo feminino.

         escreva("Digite a idade: ")
         leia(idade)
         somaIdade <- idade + somaIdade
         //Soma da idade geral.

         se(idade >= 18) e (idade <= 35) entao
         //Verificando se a pessoa tem idade entre 18 e 35.
            entre18e35 <- entre18e35 + 1
         fimse

         escreva("Digite a altura: ")
         leia(altura)
         somaAlt <- altura + somaAlt
         //Soma da altura das mulheres.
      senao
         se(sexo = 1) entao
            contH <- contH + 1
            //Contador de pessoas do sexo masculino.

            escreva("Digite a idade: ")
            leia(idade)
            somaIdadeH <- idade + somaIdadeH
            //Soma da idade dos homens.
            somaIdade <- idade + somaIdade
            //Soma da idade geral.

            se(idade >= 18) e (idade <= 35) entao
            //Verificando se a pessoa tem idade entre 18 e 35.
               entre18e35 <- entre18e35 + 1
            fimse

            escreva("Digite a altura: ")
            leia(altura)
         senao
            escreval("Digite um número válido!")
            //Caso seja digitado um número diferente de 0 ou 1.
         fimse
      fimse
      limpatela
   ate cont = 4
   //Mudei o valor pra 4 para verificar o funcionamento do código.

   se(contF > 0) entao
      mediaAlt <- somaAlt / contF
   fimse
   se(contH > 0) entao
      mediaIdadeH <- somaIdadeH / contH
   fimse
   //Protegendo a divisão com uma estrutura de seleção.

   mediaIdade <- somaIdade / cont
   percentIdade <- (entre18e35 * 100) / cont
   //Atribuindo os valores as variáveis restantes.

   escreval("Média de idade: ", mediaIdade:1)
   escreval("Média de altura das mulheres: ", mediaAlt:1:2)
   escreval("Média idade dos homens: ", mediaIdadeH:1)
   escreva(percentIdade:1, "% de pessoas tem entre 18 e 35 anos.")
   //Imprimindo os valores na tela.

Fimalgoritmo