Algoritmo "troco_verificado"
//  Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
//O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
//e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
//ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
//valor restante conforme exemplo.




Var

   precounitario, dinheirorecebido, totalapagar, troco : real
   quantidadecomprada : inteiro


Inicio

   escreva("Preço unitário do produto: ")
   leia(precounitario)
   escreva("Quantidade comprada: ")
   leia(quantidadecomprada)
   escreva("Dinheiro recebido: ")
   leia(dinheirorecebido)
   
   totalapagar <- precounitario * quantidadecomprada


   se (dinheirorecebido >= totalapagar) entao
      troco <- dinheirorecebido - totalapagar
      escreval("TROCO = ", troco:6:2)
   senao
      troco <- (dinheirorecebido - totalapagar) * -1
      escreval("DINHEIRO INSUFICIENTE. FALTAM ", troco:6:2, " REAIS")
   fimse
   
   


Fimalgoritmo