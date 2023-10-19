Algoritmo "glicose""




Var
   glicose : real


Inicio

   escreva("Digite a medida da glicose: ")
   leia(glicose)
   
   se glicose <= 100 entao
      escreval("normal")
   senao
      se (glicose > 100) e (glicose <= 140) entao
         escreval("elevado")
      senao
         escreval("diabetes")
      fimse
   fimse




Fimalgoritmo