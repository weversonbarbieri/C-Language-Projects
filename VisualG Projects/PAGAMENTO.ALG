Algoritmo "pagamento"



Var

   nome : caractere
   salario, pagamento : real
   horas : inteiro

Inicio

   escreva("Nome: ")
   leia(nome)
   escreva("Valor por hora: ")
   leia(salario)
   escreva("Horas trabalhadas: ")
   leia(horas)
   
   
   pagamento <- salario * horas
   
   escreval("O pagamento para ", nome, " deve ser ", pagamento:8:2)
   



Fimalgoritmo