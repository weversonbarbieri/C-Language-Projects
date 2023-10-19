Algoritmo "matriz_geral"




Var

   n, i, j, linha, coluna : inteiro
   soma, potencia : real
   mat : vetor[0..9, 0..9] de real

Inicio

   escreva("Qual a ordem da matriz? ")
   leia(n)
   
   para i de 0 ate n-1 faca
      para j de 0 ate n-1 faca
         escreva("Elemento [",i,",",j,"]: ")
         leia(mat[i, j])
      fimpara
   fimpara
   

   soma <- 0
   escreval
   escreva("SOMA DOS POSITIVOS: ")
   para i de 0 ate n-1 faca
      para j de 0 ate n-1 faca
         se mat[i, j] > 0 entao
         soma <- soma + mat[i, j]
         fimse
      fimpara
   fimpara
   
   escreva(soma:2:1)

   escreval
   escreval
   escreva("Escolha uma linha: ")
   leia(linha)
   escreva("LINHA ESCOLHIDA: ")
   para j de 0 ate n-1 faca
         escreva(mat[linha, j]:2:1, " ")
   fimpara

   escreval
   escreval
   escreva("Escolha uma coluna: ")
   leia(coluna)
   escreva("LINHA ESCOLHIDA: ")
   para i de 0 ate n-1 faca
      escreva(mat[i, coluna]:2:1," ")
   fimpara
   
   escreval
   escreval
   escreva("DIAGONAL PRINCIPAL: ")
   para i de 0 ate n-1 faca
       escreva(mat[i, i]:2:1, " ")
   fimpara
   

   para i de 0 ate n-1 faca
      para j de 0 ate n-1 faca
         se mat[i, j] < 0 entao
            potencia <- (mat[i, j] * mat[i, j])
            mat[i, j] <- potencia
         fimse
      fimpara
   fimpara
   
   
   escreval
   escreval
   escreval("MATRIZ ALTERADA: ")
   para i de 0 ate n-1 faca
      para j de 0 ate n-1 faca
         escreva(mat[i, j]:4:1, " ")
      fimpara
      escreval
   fimpara
   
   
   
   


Fimalgoritmo