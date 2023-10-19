Algoritmo "media_ponderada"




Var


   n, i : inteiro
   x1, x2, x3, soma, peso, media : real


Inicio


   escreva("Quantos casos voce vai digitar? ")
   leia(n)
        soma <- 0
   para i de 1 ate n faca
      escreval("Digite tres numeros: ")
      leia(x1)
      peso <- x1 * 2
      soma <- soma + peso
      
      leia(x2)
      peso <- x2 * 3
      soma <- soma + peso
      
      leia(x3)
      peso <- x3 * 5
      soma <- soma + peso
      
      media <- soma / 10
      
    escreval("MEDIA = ", media)
    soma <- 0
    fimpara



Fimalgoritmo