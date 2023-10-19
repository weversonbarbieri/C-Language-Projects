Algoritmo "experiencias"




Var


  n, i, Qcob, Scob, Sc, Sr, Ss : inteiro
  Tcob : caractere
  Pc, Pr, Ps : real


Inicio


    escreva("Quantos casos de teste serao digitados? ")
    leia(n)
    
    Scob <- 0
    Sc <- 0
    Sr <- 0
    Ss <- 0
    
    para i de 1 ate n faca
       escreva("Quantidade de cobaias: ")
       leia(Qcob)
       Scob <- Scob + Qcob
       
       escreva("Tipo de cobaia: ")
       leia(Tcob)
       
       se Tcob = "c" entao
          Sc <- Sc + Qcob
       senao
          se Tcob = "r" entao
             Sr <- Sr + Qcob
          senao
             se Tcob = "s" entao
                Ss <- Ss + Qcob
                
              fimse
          fimse
       fimse
    fimpara
    
    escreval
    escreval("RELATORIO FINAL:")
    escreval("Total: ", Scob, " cobaias")
    escreval("Total de coelhos: ", Sc:2)
    escreval("Total de ratos: ", Sr:2)
    escreval("Total de sapos: ", Ss:2)
    
    
    Pc <- Sc / Scob * 100
    Pr <- Sr / Scob * 100
    Ps <- Ss / Scob * 100
    escreval("Percentual de coelhos: ", Pc:2:2)
    escreval("Percentual de ratos:: ", Pr:2:2)
    escreval("Percentual de ratos:: ", Ps:2:2)
    




Fimalgoritmo