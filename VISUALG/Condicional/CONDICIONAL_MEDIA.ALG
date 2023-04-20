Algoritmo "condicional_media"

Var
   nomeAluno: caractere
   idadeAluno, qntdadeBimestres: inteiro
   nota1, nota2, nota3, mediaAluno: real


Inicio

   qntdadeBimestres <- 3

   escreval("             GRADE DE NOTAS")
   escreval("----------------------------------------")

   escreva("Digite o seu nome: ")
   leia(nomeAluno)
   escreva("Digite a sua idade: ")
   leia(idadeAluno)

   escreval()

   escreval("Digite a nota do 1° bimestre: ")
   leia(nota1)
   escreval("Digite a nota do 2° bimestre: ")
   leia(nota2)
   escreval("Digite a nota do 3° bimestre: ")
   leia(nota3)

   mediaAluno <- (nota1 + nota2 + nota3) / qntdadeBimestres
   limpatela

   escreval("             GRADE DE NOTAS")
   escreval("----------------------------------------")
   escreval("Nome: " , nomeAluno)
   escreval("Idade: " , idadeAluno)

   escreval()

   escreval("Nota 1° bimestre: " , nota1:2:1)
   escreval("Nota 2° bimestre: " , nota2:2:1)
   escreval("Nota 3° bimestre: " , nota3:2:1)
   escreval("----------------------------------------")

   escreval("Média: ", mediaAluno:2:1)

   se (mediaAluno >= 7.0) entao
      escreva("APROVADO.")
   senao
      escreva("REPROVADO.")
   fimse

Fimalgoritmo