Algoritmo "dardo"




Var
   a, b, c : real


Inicio
   escreval("Digite as tres distancias: ")
   leia(a)
   leia(b)
   leia(c)
   
   se (a > b) e (a > c) entao
     escreval("MAIOR DISTANCIA = ", a)
   senao
     se (b > c) entao
        escreval("MAIOR DISTANCIA = ", b)
     senao
        escreval("MAIOR DISTANCIA = ", c)
     fimse
    fimse
     
     


Fimalgoritmo