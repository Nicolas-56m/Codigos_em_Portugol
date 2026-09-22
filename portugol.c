```portugol
Algoritmo "Olá mundo"

Inicio

    Escreval("Olá mundo")
    
Fimalgoritmo
```


```portugol
Algoritmo "Nome e idade"
Var
    nome: caractere
    idade: inteiro

Inicio
    Escreval("Digite seu nome: ")
    Leia(nome)
    
    Escreval("Digite sua idade: ")
    Leia(idade)
    
    Escreval("Seu nome: ", nome)
    Escreval("Sua idade: ", idade)
    
Fimalgoritmo

```


```portugol
Algoritmo "Idade"
Var
    idade: inteiro

Inicio
    Escreval("Digite sua idade: ")
    Leia(idade)
    
    Escreval("Sua idade: ", idade)
    
Fimalgoritmo
```


```portugol
Algoritmo "Dobro"
Var
    num: inteiro

Inicio
    Escreval("Digite um numero: ")
    Leia(num)
    
    num <- num * 2
    
    Escreval("Resultado: ", num)
    
Fimalgoritmo
```


```portugol
Algoritmo "Triplo"
Var
    num: inteiro

Inicio
    Escreval("Digite um numero: ")
    leia(num)
    
    num <- num * 3
    
    Escreval("Resultado: ", num)
    
Fimalgoritmo
```


```portugol
Algoritmo "Soma de 2 números"
Var 
    n1, n2, resultado: inteiro
    
Inicio
    Escreval("Digite seu primeiro número: ")
    Leia(n1)
    
    Escreval("Digite seu segundo número: ")
    Leia(n2)
    
    resultado <- n1 + n2
        
    Escreval("Resultado: ", resultado)
    
Fimalgoritmo
```


```portugol
Algoritmo "Subtração"
Var 
    n1, n2, resultado: inteiro
    
Inicio
    Escreval("Digite seu primeiro número: ")
    Leia(n1)
    
    Escreval("Digite seu segundo número: ")
    Leia(n2)
    
    resultado <- n1 - n2
        
    Escreval("Resultado: ", resultado)
    
Fimalgoritmo
```


```portugol
Algoritmo "Multiplicação"
Var 
    n1, n2, resultado: inteiro
    
Inicio
    Escreval("Digite seu primeiro número: ")
    Leia(n1)
    
    Escreval("Digite seu segundo número: ")
    Leia(n2)
    
    resultado <- n1 * n2
        
    Escreval("Resultado: ", resultado)
    
Fimalgoritmo
```


```portugol
Algoritmo "Soma de 3 números"
Var 
    n1, n2, n3, resultado: inteiro
    
Inicio
    Escreval("Digite seu primeiro número: ")
    Leia(n1)
    
    Escreval("Digite seu segundo número: ")
    Leia(n2)

    Escreval("Digite seu terceiro número: ")
    Leia(n3)
    
    resultado <- n1 + n2 + n3
        
    Escreval("Resultado: ", resultado)
    
Fimalgoritmo
```


```portugol
Algoritmo "Média de 2 números"
Var
    n1, n2, media: real

Inicio
    Escreval("Digite seu primeiro número: ")
    Leia(n1)

    Escreval("Digite seu segundo número: ")  
    Leia(n2)  
  
    media <- (n1 + n2) / 2  
  
    Escreval("O resultado da média é: ", media)

Fimalgoritmo
```


```portugol
Algoritmo "Divisão"
Var
    n1, n2, dividir: real

Inicio
    Escreval("Digite seu primeiro número: ")
    Leia(n1)

    Escreval("Digite seu segundo número: ")  
    Leia(n2)  
  
    dividir <- n1 / n2
  
    Escreval("O resultado da divisão é: ", dividir)

Fimalgoritmo
```


```portugol
Algoritmo "Média de 4 números"
var
    n1, n2, n3, n4, media: real

Inicio
    Escreval("Digite seu primeiro número: ")
    Leia(n1)

    Escreval("Digite seu segundo número: ")  
    Leia(n2)  
    
    Escreval("Digite seu terceiro número: ")  
    Leia(n3)  
    
    Escreval("Digite seu quarto número: ")  
    Leia(n4)  
  
    media <- (n1 + n2 + n3 + n4) / 4
  
    Escreval("A média é: ", media)

Fimalgoritmo
```


```portugol
Algoritmo "Resto da divisão"
Var
    n1, n2, resto: inteiro

Inicio
   Escreval("Digite seu primeiro número: ")
   Leia(n1)
   Escreval("Digite seu segundo número: ")
   Leia(n2)

    resto <- n1 mod n2  
  
    Escreval("O resto do resultado é: ", resto)

Fimalgoritmo
```


```portugol
Algoritmo "Ímpar ou Par"
Var 
    num: Inteiro
    
Inicio
    Escreval("Digite um número: ")
    Leia(num)
    
    Se (num mod 2 <> 0) entao
        Escreval("Ímpar")
        
    Senao     
        Escreval("Par")
    Fimse    
    
Fimalgoritmo
```


```portugol
Algoritmo "Ímpar ou Par"
Var 
    num: Inteiro
    
Inicio
    Escreval("Digite um número: ")
    Leia(num)
    
    Se (num mod 2 = 0) entao
        Escreval("Par")
        
    Senao     
        Escreval("Ímpar")
    Fimse    
    
Fimalgoritmo
```


```portugol
Algoritmo "Pares"
Var 
    n1, n2: inteiro
    
Inicio
    Escreval("Digite seu primeiro número: ")
    Leia(n1)
    
    Escreval("Digite seu segundo número: ")
    Leia(n2)
  
    Se(n1 mod 2 = 0) e (n2 mod 2 = 0) entao
       Escreval("Os dois são pares")
    
    Senao  
       Escreval("Pelo menos um dos números não é par")    
    Fimse
    
Fimalgoritmo
```


```portugol
Algoritmo "Positivo ou Negativo"
Var 
    num: inteiro
    
Inicio
    Escreval("Digite seu primeiro número: ")
    Leia(num)
  
    Se(num > 0) entao
       Escreval("Número positivo")
       
    Senao
       
       Se(num < 0) entao
          Escreval("Número negativo")
    
       Senao 
          Escreval("É zero") 
       Fimse
    Fimse
    
Fimalgoritmo
```


```portugol
Algoritmo "Maior que 10"
Var 
    num: real
    
Inicio
    Escreval("Digite seu primeiro número: ")
    Leia(num)
  
    Se(num > 10) entao
       Escreval("Maior que 10")
       
    Senao
       Escreval("Não é maior que 10") 
    Fimse
    
Fimalgoritmo
```


```portugol
Algoritmo "1 ao 10"
Var
    i: inteiro
Inicio

    i <- 1
    
    Enquanto(i <= 10) faca
        Escreval(i)
        i <- i + 1
    Fimenquanto
    
Fimalgoritmo
```


```portugol
Algoritmo "10 ao 1"
Var
    i: inteiro
Inicio

    i <- 10
    
    Enquanto(i >= 1) faca
        Escreval(i)
        i <- i - 1
    Fimenquanto
    
Fimalgoritmo
```


```portugol
Algoritmo "Somar até 5"
Var
    num, soma, contador: inteiro
Inicio

    soma <- 0
    contador <- 1
    
    Enquanto(contador <= 5) faca
        Escreval("Informe um número: ")
        Leia(num)
        
        soma <- soma + num
        contador <- contador + 1
    Fimenquanto
    
    Escreval("A soma dos números é: ", soma)
    
Fimalgoritmo
```


```portugol
Algoritmo "Soma até 0"
Var
    soma, num: inteiro
Inicio

    soma <- 0
    
    Escreval("Informe um número (0 para parar): ")
    Leia(Num)
    
    Enquanto(num <> 0) faca
        soma <- soma + num
    
        Escreval("Informe um número (0 para parar): ")
        Leia(num)
    Fimenquanto
    
    Escreval("A soma total é: ", soma)
    
Fimalgoritmo
```


```portugol
Algoritmo "Tabuada"
Var
    num, contador: inteiro
Inicio
    
    Escreval("Informe um número: ")
    Leia(num)
    
    contador <- 1
    
    Enquanto(contador <= 10) faca
        Escreval(num, "x", contador, "= ", num * contador)
        contador <- contador + 1
    Fimenquanto
    
Fimalgoritmo
```


```portugol
Algoritmo "1 Até 10"
Var 
    i: inteiro
Inicio
    
    Para i de 1 ate 10 faca
        Escreval(i)
    Fimpara
    
Fimalgoritmo
```


```portugol
Algoritmo "Pares até 20"
Var 
    num: inteiro
Inicio
    
    Para num de 2 ate 20 passo 2 faca 
        Escreval(num)
    Fimpara
    
Fimalgoritmo
```


```portugol
Algoritmo "1 ao 5"
Var 
    num, soma: inteiro
Inicio
    
    soma <- 0
    
    Para num de 1 ate 5 faca
        soma <- soma + num
    Fimpara
    
    Escreval("Resultado: ", soma)
    
Fimalgoritmo
```


```portugol
Algoritmo "Tabuada"
Var 
    num, i: inteiro
Inicio

    Escreval("Informe um número: ")
    Leia(num)
     
    Para i de 1 ate 10 faca
        Escreval(num, "x", i, "=", num * i)
    Fimpara
    
Fimalgoritmo
```


```portugol
Algoritmo "Contagem Regressiva"
Var 
    i: inteiro
Inicio
     
    Para i de 10 ate 1 passo -1 faca
        Escreval(i)
    Fimpara
    
Fimalgoritmo
```
