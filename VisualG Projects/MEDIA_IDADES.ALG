Algoritmo "media_idades"




Var

   idade, somaidades, Qidades : inteiro
   media : real


Inicio

   escreval("Digite as idades: ")
   leia(idade)



   se idade < 0 entao
      escreva("IMPOSSIVEL CALCULAR")
   senao
   
         Qidades <- 0
         somaidades <- idade
         enquanto idade > 0 faca
            leia(idade)
            Qidades <- Qidades + 1
            somaidades <- somaidades + idade
         fimenquanto
         somaidades <- (idade * (-1)) + somaidades
         media <- somaidades / Qidades
    escreva("Media = ", media:6:2)
    fimse
    



Fimalgoritmo