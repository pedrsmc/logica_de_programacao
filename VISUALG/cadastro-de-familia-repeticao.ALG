Algoritmo "semnome"

Var
   mediaFil, mediaSal, mediaFilhos, maiorSal, somaSal, menorSal, salario: real
   filhos, somaFil, cont: inteiro

Inicio
   salario <- 0
   cont <- 0

   enquanto salario >= 0 faca
   //Laço que se repete enquanto o salário não for um valor negativo.
      escreval("Cadastro N°", cont + 1)
      escreva("Digite o salário: ")
      leia(salario)

      se(salario >= 0) entao
      //Caso o salário um valor negativo, o computador não ira ler os dados restantes, indo direto para o resultado.
         escreva("Quantidade de filhos: ")
         leia(filhos)

         se(cont = 0) entao
            maiorSal <- salario
            menorSal <- salario
         fimse
         se(salario > maiorSal) entao
            maiorSal <- salario
         senao
            se(salario < menorSal) entao
               menorSal <- salario
            fimse
         fimse
         //Condicional para verificar qual salário é maior ou menor

         somaSal <- salario + somaSal
         somaFil <- filhos + somaFil
         //Soma dos dados lidos.
         cont <- cont + 1
         limpatela
      fimse
   fimenquanto

   limpatela
   se(cont > 0) entao
      mediaSal <- somaSal / cont
      mediaFil <- somaFil / cont
   fimse
   //Estrutura de seleção para proteger a divisão.

   escreval("Total de famílias: ", cont)
   escreval("Média salárial: R$", mediaSal:1:2)
   escreval("Média da quantidade de filhos: ", mediaFil:1:1)
   escreval("Maior salário: ", maiorSal:1:2)
   escreva("Menor salário: ", menorSal:1:2)
   //Imprimindo os valores arredondados.
Fimalgoritmo