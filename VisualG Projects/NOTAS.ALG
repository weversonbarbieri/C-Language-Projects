Algoritmo "notas"
//Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
//uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
//ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
//mensagem "REPROVADO", conforme exemplos

Var
   notafinal, primeiranota, segundanota : real

Inicio

   escreval("Digite a primeira nota:")
   leia(primeiranota)
   escreval("Digite a segunda nota:")
   leia(segundanota)
   
   notafinal <- primeiranota + segundanota
   
   escreval("NOTA FINAL =", notafinal:6,1)
   
   se notafinal < 60 entao
      escreval("REPROVADO")
   senao
   fimse



Fimalgoritmo