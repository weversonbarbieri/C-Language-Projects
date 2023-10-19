Algoritmo "par_impar"





Var


   n, i, num : inteiro


Inicio


   escreval("Quantos numeros voce vai digitar? ")
   leia(n)
   
   para i de 1 ate n faca
   
   escreva("Digite um numero: ")
   leia(num)
   
      se (num % 2 <> 0) e (num < 0) entao
         escreval("IMPAR NEGATIVO")
      senao
         se num = 0 entao
            escreval("NULO")
         senao
            se (num % 2 <> 0) e (num > 0) entao
               escreval("IMPAR POSITIVO")
            senao
               se (num % 2 = 0) e (num < 0) entao
                  escreval("PAR NEGATIVO")
               senao
                  se (num % 2 = 0) e (num > 0) entao
                     escreval("PAR POSITIVO")
                fimse
              fimse
            fimse
         fimse
      fimse
      
   fimpara

Fimalgoritmo