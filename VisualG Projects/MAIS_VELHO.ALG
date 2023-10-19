Algoritmo "mais_velho"




Var

   i, n, maior, posmaior : inteiro
   idade : vetor [0..9] de inteiro
   nome : vetor [0..9] de caractere


Inicio

   escreva("Quantas pessoas voce vai digitar? ")
   leia(n)
   
   para i de 0 ate n-1 faca
       escreval("Dados da ", i + 1,"a pessoa: ")
       escreva("Nome: ")
       leia(nome[i])
       escreva("Idade: ")
       leia(idade[i])
   
   fimpara
   
      maior <- 0
      posmaior <- 0
   para i de 0 ate n-1 faca
       se idade[i] > maior entao
          maior <- idade[i]
          posmaior <- i
        fimse
   fimpara
   

   escreval("PESSOA MAIS VELHA: ", nome[posmaior])


Fimalgoritmo