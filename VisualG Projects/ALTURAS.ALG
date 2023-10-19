Algoritmo "alturas"





Var

    n, i : inteiro
    media, somaaltura, soma16, porcentagem : real
    nome : caractere
    vetnome : vetor [0..9] de caractere
    vetidade : vetor [0..9] de inteiro
    vetaltura : vetor [0..9] de real


Inicio


   escreva("Quantas pessoas serao digitadas? ")
   leia(n)
   
   para i de 0 ate n-1 faca
      escreval("Dados da ",i+1,"a pessoa: ")
      escreva("Nome: ")
      leia(vetnome[i])
      escreva("Idade: ")
      leia(vetidade[i])
      escreva("Altura: ")
      leia(vetaltura[i])
   fimpara
   
      somaaltura <- 0
   para i de 0 ate n-1 faca
      somaaltura <- somaaltura + vetaltura[i]
   fimpara
   
      soma16 <- 0
   para i de 0 ate n-1 faca
      se vetidade[i] < 16 entao
        soma16 <- soma16 + 1
      fimse
   fimpara
   
   media <- somaaltura / n
   porcentagem <- soma16 * 100 / n

   escreval
   escreval("Altura média: ", media:2:2)
   escreval("Pessoas com menos de 16 anos: ", porcentagem:2:1, "%")
   
   para i de 0 ate n-1 faca
      se vetidade[i] < 16 entao
        escreval(vetnome[i])
      fimse
   fimpara

   
   



Fimalgoritmo