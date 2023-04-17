Algoritmo "exercicio02"
//A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes
//coletando dados sobre o salário e números de filhos.
//Elabore um algoritmo para aprenstar (use a estrutura enquanto-faça).
//a)Média do salário da população
//b)Média do números de filhos
//c)Maior salário
//d)Percentual de pessoas com salário até 100,00
Var
   opcao, qntFilhos, qntCad, qntCem: inteiro
   somaSal, somaFilhos, salario, mediaSal, mediaFilhos, maiorSal, percentCem: real

Inicio
   opcao <- 1
   //Para iniciar o laço.

   enquanto opcao = 1 faca
      escreval("Digite '1' para cadastrar.")
      escreval("Digite '2' para sair.")
      leia(opcao)

      se(opcao = 1) entao
         limpatela
         escreval("Digite o valor do salário: ")
         leia(salario)

         se (salario <= 100) entao
            qntCem <- qntCem + 1
         fimse
         //Contador de pessoas com salário até 100,00.

         se(salario >  maiorSal) entao
            maiorSal <- salario
         fimse
         //Verificando o maior salário

         escreval("Digite a quantidade de filhos: ")
         leia(qntFilhos)

         somaSal <- somaSal + salario
         somaFilhos <- somaFilhos + qntFilhos
         //Soma total de salários e filhos.
         qntCad <- qntCad + 1
         //Contador de cadastros.
         limpatela
      fimse
   fimenquanto

   se(qntCad > 0) entao
      mediaSal <- somaSal / qntCad
      mediaFilhos <- somaFilhos / qntCad
      percentCem <- (qntCem * 100) / qntCad
      //Cálculos.
   fimse
   //Protegendo a divisão com uma estrutura condicional.

   limpatela
   escreval("Média salarial da população: R$ ", mediaSal:4:2)
   escreval("Média de número de filhos população: ", mediaFilhos:2)
   escreval("Maior salário: R$", maiorSal)
   escreval("Percentual de pessoas com salário até R$ 100,00: ", percentCem:1, "%")
   //Código para imprimir os valor total (arredondado) na tela.

Fimalgoritmo