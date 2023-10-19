Algoritmo "media_pares"




Var

   n, i : inteiro
   media, soma, contpares : real
   x : vetor [0..9] de real

Inicio


   escreva("Quantos elementos vai ter o vetor? ")
   leia(n)
   
   para i de 0 ate n-1 faca
       escreva("Digite um numero: ")
       leia(x[i])
   fimpara
   
   soma <- 0
   contpares <- 0
   para i de 0 ate n-1 faca
       se x[i] % 2 = 0 entao
          soma <- soma + x[i]
          contpares <- contpares + 1
       fimse

   fimpara
   
   se contpares = 0 entao
      escreva("NENHUM NUMERO PAR")
   senao
      media <- soma / contpares
      escreval("MEDIA DOS PARES = ", media:2:1)
   fimse
   

   
   
   
   


Fimalgoritmo