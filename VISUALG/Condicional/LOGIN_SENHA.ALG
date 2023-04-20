Algoritmo "login_senha"

Var

   loginDigitado, senhaDigitada: caractere
   //Login e senha digitados pelo usuário.
   loginCorreto, senhaCorreta: caractere
   //Login e senha do banco de dados.

Inicio

   loginCorreto <- "pedrosamuel"
   senhaCorreta <- "12345"
   

   escreval("               LOGIN E SENHA")
   escreval("                 Bem vindo!")
   escreval("------------------------------------------------")

   escreva("Login: ")
   leia(loginDigitado)
   escreva("Senha: ")
   leia(senhaDigitada)

   se (loginDigitado = loginCorreto) e (senhaDigitada = senhaCorreta) entao
      limpatela
      escreval("ENTRADA PERMITIDA.")

   senao
      escreval()
      escreval("LOGIN OU SENHA INCORRETA!")

   fimse

Fimalgoritmo