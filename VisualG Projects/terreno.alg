Algoritmo "semnome"


Var

  largura : real
  comprimento : real
  valorm2 : real
  Aterreno : real
  Pterreno : real

Inicio


  
  escreva("Digite a Largura do terreno: ")
  leia(largura)
  escreva("Digite a comprimento do terreno: ")
  leia(comprimento)
  escreva("Digite preço por m2 do terreno: ")
  leia(valorm2)
  
  Aterreno <- largura * comprimento
  Pterreno <- Aterreno * valorm2
  
  escreval("A área do terreno é ", Aterreno:5:2, "m2")
  escreval("O preço do terreno é R$", Pterreno:8:2)
   


Fimalgoritmo