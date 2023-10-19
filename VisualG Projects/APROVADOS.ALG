Algoritmo "aprovados"





Var
   n, i, posaprov : inteiro
   aluno : vetor [0..9] de caractere
   nota1 : vetor [0..9] de real
   nota2 : vetor [0..9] de real
   media : vetor [0..9] de real
   


Inicio
   escreva("Quantos alunos serao digitados? ")
   leia(n)
   
   para i de 0 ate n-1 faca
      escreval("Digite nome, primeira e segunda nota do", i+1, "o aluno: ")
      leia(aluno[i])
      leia(nota1[i])
      leia(nota2[i])
   
      media [i] <- (nota1[i] + nota2[i]) / 2
   fimpara
   
      posaprov <- 0
      escreval("Alunos aprovados:")
   para i de 0 ate n-1 faca
      se media[i] >= 6.0 entao
         posaprov <- i
      escreval,
      (aluno[posaprov])
      fimse
   fimpara
   
   


Fimalgoritmo