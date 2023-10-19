Algoritmo "operadora"
// 
//  


Var

   planobasico, excedente, valorapagar, excederfranquia : real
   minutosgastos, franquiaminutos : inteiro
   

Inicio

   escreva("Digite a quantidade de minutos: ")
   leia(minutosgastos)

   franquiaminutos <- 100
   planobasico <- 50.00
   excederfranquia <- 2.00


   se (minutosgastos > 100) entao
      excedente <- (minutosgastos - 100) * excederfranquia
      valorapagar <- planobasico + excedente
      escreval("Valor a pagar: ", valorapagar:6:2)
   senao
      escreval("Valor a pagar: ", planobasico:6:2)
   fimse


Fimalgoritmo