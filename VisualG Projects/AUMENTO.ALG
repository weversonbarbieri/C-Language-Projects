Algoritmo "aumento"





Var
   salario, novosalario, aumento : real
   porcentagem : inteiro


Inicio

     escreva("Digite o salario da pessoa: ")
     leia(salario)
     
     se salario <= 1000 entao
        aumento <- salario * 0.2
        novosalario <- aumento + salario
        porcentagem <- 20
     senao
        se salario <= 3000 entao
           aumento <- salario * 0.15
           novosalario <- aumento + salario
           porcentagem <- 15
        senao
           se salario <= 8000 entao
              aumento <- salario * 0.1
              novosalario <- aumento + salario
              porcentagem <- 10
           senao
              aumento <- salario * 0.05
              novosalario <- aumento + salario
              porcentagem <- 5

           fimse
        fimse
     fimse
     
     escreval("Novo salario = R$ ", novosalario:7:2)
     escreval("Aumento = R$ ", aumento:6:2)
     escreval("Porcentagem = ", porcentagem, "%")
     




Fimalgoritmo