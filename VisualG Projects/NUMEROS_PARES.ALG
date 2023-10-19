Algoritmo "numeros_pares"





Var


   i, n, somapares : inteiro
   numero : vetor [0..8] de inteiro
   


Inicio

   escreva("Quantos numeros voce vai digitar? ")
   leia(n)
   
   para i de 0 ate n-1 faca
      escreva("Digite um numero: ")
      leia(numero[i])
   fimpara
   
   escreval
   escreval("NUMEROS PARES:")
   para i de 0 ate n-1 faca
      se numero[i] % 2 = 0 entao
        escreva(numero[i])
      fimse
   fimpara
   
   escreval
   somapares <- 0
   para i de 0 ate n-1 faca
      se numero[i] % 2 = 0 entao
        somapares <- somapares + 1
      fimse
   fimpara
   
   escreval("QUANTIDADE DE PARES = ", somapares)
   
   
   





Fimalgoritmo