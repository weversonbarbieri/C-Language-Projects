Algoritmo "pares_consecutivos"




Var


   x, x1, x2,x3, x4, soma : inteiro


Inicio

   escreva("Digite um numero inteiro:")
   leia(x)
   
   enquanto x <> 0 faca

      se (x % 2) = 0 entao
         x1 <- x + 2
         x2 <- x1 + 2
         x3 <- x2 + 2
         x4 <- x3 + 2
      soma <- x + x1 + x2 + x3 + x4
      escreval("SOMA = ", soma)
      senao
            x <- x + 1
            x1 <- x + 2
            x2 <- x1 + 2
            x3 <- x2 + 2
            x4 <- x3 + 2

         soma <- x + x1 + x2 + x3 + x4
         escreval("SOMA = ", soma)
         
       fimse
       
       escreva("Digite um numero inteiro:")
       leia(x)
       
     fimenquanto





Fimalgoritmo