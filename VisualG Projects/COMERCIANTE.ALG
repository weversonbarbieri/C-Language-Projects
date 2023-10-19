Algoritmo "comerciante"




Var
   n, i : inteiro
   lucroporcentagem, tlucro, tcompra, tvenda, lucro, lucroabaixo, lucroentre, lucroacima : real
   nome : vetor [0..9] de caractere
   venda : vetor [0..9] de real
   compra : vetor [0..9] de real


Inicio
   escreva("Serao digitados dados de quantos produtos? ")
   leia(n)
   
   
      tcompra <- 0
      tvenda <- 0
   para i de 0 ate n-1 faca
      escrevaL("Produto", i+1, ":")
      escreva("Nome: ")
      leia(nome[i])
      escreva("Preco de compra: ")
      leia(compra[i])
      escreva("Preco de venda: ")
      leia(venda[i])
      
      tcompra <- tcompra + compra[i]
      tvenda <- tvenda + venda[i]
      tlucro <- tvenda - tcompra
      
   fimpara
   
   lucroabaixo <- 0
   lucroentre <- 0
   lucroacima <- 0
   para i de 0 ate n-1 faca
      lucro <- (venda[i] - compra[i])
      lucroporcentagem <- lucro * 100 / venda[i]
      
      se lucroporcentagem < 10 entao
         lucroabaixo <- lucroabaixo + 1
      senao
         se (lucroporcentagem >= 10) e (lucroporcentagem <= 20) entao
            lucroentre <- lucroentre + 1
         senao
            lucroacima <- lucroacima + 1
         
         fimse
      fimse
      
      
   fimpara
   
   escreval
   escreval("RELATORIO:")
   escreval("Lucro abaixo de 10%: ", lucroabaixo:2)
   escreval("Lucro entre 10% e 20%: ", lucroentre:2)
   escreval("Lucro acima de 20%: ", lucroacima:2)
   escreval("Valor total de compra: ", tcompra:2:2)
   escreval("Valor total de venda: ", tvenda:2:2)
   escreval("Lucro total: ", tlucro:2:2)

Fimalgoritmo