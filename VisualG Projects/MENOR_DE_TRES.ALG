Algoritmo "menor_de_tres"
//Fazer um programa para ler tr�s n�meros inteiros. Em seguida, mostrar qual o menor dentre os tr�s
//n�meros lidos. Em caso de empate, mostrar apenas uma vez.


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