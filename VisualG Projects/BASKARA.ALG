Algoritmo "baskara"
//x = -b � v(b� � 4ac) / (2a)
// Fazer um programa para ler os tr�s coeficientes de uma equa��o do segundo grau. Usando a f�rmula
//de Baskara, calcular e mostrar os valores das ra�zes x1 e x2 da equa��o com quatro casas decimais,
//conforme exemplo. Se a equa��o n�o possuir ra�zes reais, mostrar uma mensagem.


Var

   delta, x1, x2, a, b, c : real


Inicio

   escreva("Coeficiente a: ")
   leia(a)
   escreva("Coeficiente b: ")
   leia(b)
   escreva("Coeficiente c: ")
   leia(c)
   
   delta <- (exp(b, 2) - (4 * a * c))
   
   se (delta < 0) ou (a  = 0) entao
      escreva("Esta equacao nao possui raizes reais")
   senao
      x1 <- - (b - RaizQ(delta))  / (2 * a)
      x2 <- - (b + RaizQ(delta))  / (2 * a)
      escreval("X1 = ", x1:6:4)
      escreval("X2 = ", x2:6:4)
   fimse
   
   


Fimalgoritmo