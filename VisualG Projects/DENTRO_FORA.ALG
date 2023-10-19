Algoritmo "dentro_fora"




Var

   x, i, dentro, fora : inteiro

Inicio

   escreva("Quantos numeros voce vai digitar? ")
   leia(x)
   
   dentro <- 0
   fora <- 0
   para i de 1 ate x faca
      escreva("Digite um numero: ")
      leia(x)


      
      se (x >= 10) e (x <= 20) entao
         dentro <- dentro + 1
      senao
         fora <- fora + 1
      fimse
      
   fimpara
   
   escreval(dentro, " DENTRO")
   escreva(fora, " FORA")
   



Fimalgoritmo