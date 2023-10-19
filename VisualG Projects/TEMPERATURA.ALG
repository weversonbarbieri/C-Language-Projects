Algoritmo "temperatura"





Var
   temperatura : caractere
   ftemperatura, ctemperatura : real


Inicio
   escreva("Voce vai digitar a temperatura em qual escala (C/F)? ")
   leia(temperatura)
   
   se temperatura = "f" entao
      escreva("Digite a temperatura em Fahrenheit: ")
      leia(ftemperatura)
      ctemperatura <- 5 / 9 * (ftemperatura - 32)
      escreval("Temperatura equivalente em Celsius: ", ctemperatura:5:2)
   senao
       se temperatura = "c" entao
          escreva("Digite a temperatura em Celsius: ")
          leia(ctemperatura)
          ftemperatura <- 32 + (ctemperatura * 9) / 5
          escreval("Temperatura equivalente em Fahrenheit: ", ftemperatura:5:2)
       senao
          escreval("Digite outra letra novemente")
        fimse
    fimse
       
      



Fimalgoritmo