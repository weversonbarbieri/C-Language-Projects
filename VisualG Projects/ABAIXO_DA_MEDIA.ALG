Algoritmo "abaixo_da_media"





Var


   n, i : inteiro
   media, soma : real
   x : vetor [0..9] de real

Inicio


   escreva("Quantos elementos vai ter o vetor? ")
   leia(n)
   
   para i de 0 ate n-1 faca
   escreva("Digite um numero: ")
   leia(x[i])
   fimpara
   
   soma <- 0
   para i de 0 ate n-1 faca
      soma <- soma + x[i]
   fimpara
   
   media <- soma / n
   escreval
   escreval("MEDIA DO VETOR = ", media:2:3)
   

   escreval("ELEMENTOS ABAIXO DA MEDIA: ")
   para i de 0 ate n-1 faca
      se x[i] < media entao
      escreval(x[i])
      fimse
   fimpara
   


   
   


Fimalgoritmo