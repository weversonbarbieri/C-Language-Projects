Algoritmo "menor_de_tres"
//Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
//números lidos. Em caso de empate, mostrar apenas uma vez.


Var
   a, b, c : inteiro


Inicio

   escreva("Primeiro valor: ")
   leia(a)
   escreva("Segundo valor: ")
   leia(b)
   escreva("Terceiro valor: ")
   leia(c)
   
   se (a = b) e (b = c) entao
      escreva("MENOR = ", a)
      senao
       se (a > b) e (b < c) entao
          escreva("MENOR = ", b)
          senao
           se (a > b) e (b > c) entao
              escreva("MENOR = ", c)
              senao
              escreva("MENOR = ", a)
       fimse
           fimse
   fimse



Fimalgoritmo