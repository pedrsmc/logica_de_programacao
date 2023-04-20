Algoritmo "media"

Var
   nomeAluno: caractere
   idadeAluno, qntdadeBimestres: inteiro
   nota1, nota2, nota3, nota4, mediaAluno: real


Inicio

      qntdadeBimestres <- 4

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
      escreval("Digite a nota do 4° bimestre: ")
      leia(nota4)
      
      mediaAluno <- (nota1 + nota2 + nota3 + nota4) / qntdadeBimestres
      
      limpatela
      
      escreval("             GRADE DE NOTAS")
      escreval("----------------------------------------")
      
      escreval("Nome: " , nomeAluno)
      escreval("Idade: " , idadeAluno)
      escreval("Nota 1° bimestre: " , nota1:2:1)
      escreval("Nota 2° bimestre: " , nota2:2:1)
      escreval("Nota 3° bimestre: " , nota3:2:1)
      escreval("Nota 4° bimestre: " , nota4:2:1)
      escreval()
      escreval("Média: ", mediaAluno:2:1)

Fimalgoritmo