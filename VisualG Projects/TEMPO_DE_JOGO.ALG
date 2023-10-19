Algoritmo "tempo_de_jogo"



Var
   horainicial, horafinal, duracao :real


Inicio
   escreva("Hora inicial: ")
   leia(horainicial)
   escreva("Hora final: ")
   leia(horafinal)
   
   
   
   se (horainicial > 12) e (horafinal < 12) entao
      duracao <- (24 - horainicial) +  horafinal
      senao
         se (horainicial < 12) e (horafinal < 12) entao
            duracao <- (24 - horainicial) + horafinal)
            senao
               se (horainicial < 12) e (horafinal > 12) entao
                  duracao <- (12 - horainicial) + (horafinal - 12)
                  senao
                  duracao <- (24 - horainicial) + horafinal)


               fimse
         fimse
   fimse
      
      escreval("O JOGO DUROU ", duracao, " HORA(S)")



Fimalgoritmo