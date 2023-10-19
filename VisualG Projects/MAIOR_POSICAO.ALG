Algoritmo "maior_posicao"





Var

   n, i, posmaior : inteiro
   maior : real
   numero : vetor [0..7] de real



Inicio


   escreva("Quanto numeros voce vai digitar? ")
   leia(n)
   
   para i de 0 ate n-1 faca
      escreva("Digite um numero: ")
      leia(numero[i])
   fimpara
   
   maior <- numero[0]
   posmaior <- 0

   para i de 1 ate n-1 faca
      se numero[i] > maior entao
        maior <- numero[i]
        posmaior <- i
      fimse

   fimpara
   
   escreval
   escreval("MAIOR VALOR = ", maior:2:1)
   escreva("POSICAO DO MAIOR VALOR = ", posmaior:1)
   



Fimalgoritmo