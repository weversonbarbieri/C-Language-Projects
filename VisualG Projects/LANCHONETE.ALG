Algoritmo "lanchonete"




Var
    produto, quantidade : inteiro
    valor : real


Inicio
   escreva("Codigo do produto comprado: ")
   leia(produto)
   escreva("Quantidade comprada: ")
   leia(quantidade)
   


   se produto = 1 entao
      valor <- quantidade * 5.00
      escreval("Valor a pagar: ", valor:6:2)
   senao
      se produto = 2 entao
         valor <- quantidade * 3.50
         escreval("Valor a pagar: ", valor:6:2)
      senao
         se produto = 3 entao
            valor <- quantidade * 4.80
            escreval("Valor a pagar: ", valor:6:2)
         senao
            se produto = 4 entao
               valor <- quantidade * 8.90
               escreval("Valor a pagar: ", valor:6:2)
            senao
               valor <- quantidade * 7.32
               escreval("Valor a pagar: ", valor:6:2)

            fimse
         fimse
      fimse
   fimse



Fimalgoritmo