Algoritmo "dados_pessoas"




Var

   n, i, somaM, somaF  : inteiro
   menor, maior, mediaaltura, somaaltura, media : real
   altura : vetor [0..9] de real
   genero : vetor [0..9] de caractere

Inicio
   escreva("Quantas pessoas serao digitadas? ")
   leia(n)
   
   para i de 0 ate n-1 faca
      escreva("Altura da ", i+1, "a pessoa: ")
      leia(altura[i])
      escreva("Genero da ", i+1, "a pessoa: ")
      leia(genero[i])
   fimpara
   
   menor <- altura[0]
   maior <- altura[0]
   para i de 0 ate n-1 faca
      se altura[i] > maior entao
         maior <- altura[i]
      fimse
      se altura[i] < menor entao
         menor <- altura[i]
      fimse
   fimpara
   
      somaaltura <- 0
      somaM <- 0
      somaF <- 0
   para i de 0 ate n-1 faca
      se genero[i] = "F" entao
        somaaltura <- somaaltura + altura[i]
        somaF <- somaF + 1
      senao
       somaM <- somaM + 1
      fimse
   fimpara
   
   se somaF = 0 entao
     escreval("Impossivel calcular a altura das mulheres")

   senao
     media <- somaaltura / somaF
   fimse

   escreval("Menor altura = ", menor:1:2)
   escreval("Maior altura = ",  maior:1:2)
   escreval("Media das alturas das mulheres = ", media:1:2)
   escreva("Numero de homens = ", somaM:1)



Fimalgoritmo