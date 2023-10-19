Algoritmo "soma_vetor"



Var

   n, i : inteiro
   vet : vetor [0..9] de real
   soma, media : real



Inicio

   escreva("Quantos numeros voce vai digitar? ")
   leia(n)
   
   para i de 0 ate n-1 faca
      escreva("Digite um numero: ")
      leia(vet [i])
   fimpara
   
   soma <- 0
   escreval
   escreva("VALORES = ")
   para i de 0 ate n-1 faca
      escreva(vet [i]:3:1," ")
   fimpara
   
   
   para i de 0 ate n-1 faca
      soma <- soma + vet [i]
   fimpara
   
   media <- soma / n
   escreval
   escreval("SOMA = ", soma:2:2)
   escreval("MEDIA = ", media:2:2)
   



Fimalgoritmo