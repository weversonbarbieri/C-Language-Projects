Algoritmo "semnome"
//Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
//da área, perímetro e diagonal deste retângulo, com quatro casas decimais
//A=b·a
//P=2(b+a)
//d = RaizQ(a2+b2)

Var

   Bret, Aret, A, P, D: real


Inicio

   escreva("Base do retangulo: ")
   leia(Bret)
   escreva("Altura do retangulo: ")
   leia(Aret)
   
   A <- (Bret * Aret)
   P <- 2*(Bret + Aret)
   D <- RaizQ(exp(Aret,2) + exp(Bret,2))
   
   escreval("AREA = ", A:6:4)
   escreval("PERIMETRO = ", P:6:4)
   escreval("DIAGONAL = ", D:6:4)
   
   


Fimalgoritmo