Algoritmo "combustivel"




Var

   somaalcool, somagasolina, somadiesel, codigo : inteiro

Inicio

       somaalcool <- 0
       somagasolina <- 0
       somadiesel <- 0
   
   enquanto codigo <> 4 faca

       escreva("Informe um codigo (1, 2, 3) ou 4 para parar: ")
       leia(codigo)


       
       se codigo = 1 entao
          somaalcool <- somaalcool + codigo
       senao
          se codigo = 2 entao
             somagasolina <- somagasolina + (codigo - 1)
          senao
             se codigo = 3 entao
                somadiesel <- somadiesel + (codigo - 2)
              senao

            fimse
          fimse
       fimse
       
    fimenquanto
    
    escreval("MUITO OBRIGADO")
    escreval("Alcool:", somaalcool)
    escreval("Gasolina:", somagasolina)
    escreval("Diesel:", somadiesel)



Fimalgoritmo