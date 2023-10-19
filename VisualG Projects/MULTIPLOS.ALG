Algoritmo "multiplos"




Var
   a, b, resto1, resto2 : inteiro


Inicio

     escreval("Digite dois numeros inteiros: ")
     leia(a)
     leia(b)
     
     //se (x % y) = 0) ou (y % x = 0)


     
     se a > b entao
        resto1 <- a % b
     senao
        resto2 <- b % a
     fimse
     
     
        se resto1 = 0 entao
           escreval("Sao multiplos")
        senao
           escreval("Nao sao multiplos")

     fimse
     

        



        


Fimalgoritmo