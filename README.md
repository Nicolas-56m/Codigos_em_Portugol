# Códigos-em-Portugol  - Feitos por mim (para estudo)

## FASE 1 - Escreval, leia e contas (somente)
<img src="https://img.shields.io/badge/FEITO NO-%2BVisuAlg-red">

### 1-) Mostrar "Olá mundo".

```portugol
algoritmo "Olá mundo"

inicio

    escreval("Olá mundo")
    
fimalgoritmo
```

### 2-) Pedir nome e idade e mostrar na tela.

```portugol
algoritmo "Nome e idade"
var
    nome: caractere
    idade: inteiro

inicio
    escreval("Digite seu nome: ")
    leia(nome)
    
    escreval("Digite sua idade: ")
    leia(idade)
    
    escreval("Seu nome: ", nome)
    escreval("Sua idade: ", idade)
    
fimalgoritmo

```

### 3-) Pedir idade e mostrar ela.

```portugol
algoritmo "Idade"
var
    idade: inteiro

inicio
    escreval("Digite sua idade: ")
    leia(idade)
    
    escreval("Sua idade: ", idade)
    
fimalgoritmo
```

### 4-) Pedir número e mostrar o dobro.

```portugol
algoritmo "Dobro"
var
    num: inteiro

inicio
    escreval("Digite um numero: ")
    leia(num)
    
    num <- num * 2
    
    escreval("Resultado: ", num)
    
fimalgoritmo
```

### 5-) Pedir número e mostrar o triplo.

```portugol
algoritmo "Triplo"
var
    num: inteiro

inicio
    escreval("Digite um numero: ")
    leia(num)
    
    num <- num * 3
    
    escreval("Resultado: ", num)
    
fimalgoritmo
```

## FASE 2 - Soma, subtração, multiplicação e divisão
<img src="https://img.shields.io/badge/FEITO NO-%2BVisuAlg-blue">

### 1-) Somar 2 números.

```portugol
algoritmo "Soma de 2 números"
var 
    n1, n2, resultado: inteiro
    
inicio
    escreval("Digite seu primeiro número: ")
    leia(n1)
    
    escreval("Digite seu segundo número: ")
    leia(n2)
    
    resultado <- n1 + n2
        
    escreval("Resultado: ", resultado)
    
fimalgoritmo
```

### 2-) Subtrair 2 números.

```portugol
algoritmo "Subtração"
var 
    n1, n2, resultado: inteiro
    
inicio
    escreval("Digite seu primeiro número: ")
    leia(n1)
    
    escreval("Digite seu segundo número: ")
    leia(n2)
    
    resultado <- n1 - n2
        
    escreval("Resultado: ", resultado)
    
fimalgoritmo
```

### 3-) Multiplicar 2 números.

```portugol
algoritmo "Multiplicação"
var 
    n1, n2, resultado: inteiro
    
inicio
    escreval("Digite seu primeiro número: ")
    leia(n1)
    
    escreval("Digite seu segundo número: ")
    leia(n2)
    
    resultado <- n1 * n2
        
    escreval("Resultado: ", resultado)
    
fimalgoritmo
```

### 4-) Somar 3 números.

```portugol
algoritmo "Soma de 3 números"
var 
    n1, n2, n3, resultado: inteiro
    
inicio
    escreval("Digite seu primeiro número: ")
    leia(n1)
    
    escreval("Digite seu segundo número: ")
    leia(n2)

    escreval("Digite seu terceiro número: ")
    Leia(n3)
    
    resultado <- n1 + n2 + n3
        
    escreval("Resultado: ", resultado)
    
fimalgoritmo
```

### 5-) Fazer média de 2 números.

```portugol
algoritmo "Média de 2 números"
var
    n1, n2, media: real

inicio
    escreval("Digite seu primeiro número: ")
    leia(n1)

    escreval("Digite seu segundo número: ")  
    leia(n2)  
  
    media <- (n1 + n2) / 2  
  
    escreval("O resultado da média é: ", media)

fimalgoritmo
```

### 6-) Dividir 2 números.

```portugol
algoritmo "Divisão"
var
    n1, n2, dividir: real

inicio
    escreval("Digite seu primeiro número: ")
    leia(n1)

    escreval("Digite seu segundo número: ")  
    leia(n2)  
  
    dividir <- n1 / n2
  
    escreval("O resultado da divisão é: ", dividir)

fimalgoritmo
```

### 7-) Calcular média (usa divisão).

```portugol
algoritmo "Média de 4 números"
var
    n1, n2, n3, n4, media: real

inicio
    escreval("Digite seu primeiro número: ")
    leia(n1)

    escreval("Digite seu segundo número: ")  
    leia(n2)  
    
    Escreval("Digite seu terceiro número: ")  
    leia(n3)  
    
    Escreval("Digite seu quarto número: ")  
    leia(n4)  
  
    media <- (n1 + n2 + n3 + n4) / 4
  
    escreval("A média é: ", media)

fimalgoritmo
```

### 8-) Dividir e mostrar resto (desafio leve).

```portugol
algoritmo "Resto da divisão"
var
    n1, n2, resto: inteiro

inicio
   escreval("Digite seu primeiro número: ")
   leia(n1)
   escreval("Digite seu segundo número: ")
   leia(n2)

   resto <- n1 mod n2  
  
   escreval("O resto do resultado é: ", resto)

fimalgoritmo
```

## FASE 3 - SE, SENAO
<img src="https://img.shields.io/badge/FEITO NO-%2BVisuAlg-green"> 

### 1-) Verificar se número é ímpar.

```portugol
algoritmo "Ímpar ou Par"
var 
    num: Inteiro
    
inicio
    escreval("Digite um número: ")
    leia(num)
    
    se (num mod 2 <> 0) entao
        Escreval("Ímpar")
        
    senao     
        escreval("Par")
    fimse    
    
fimalgoritmo
```

### 2-) Verificar se o número é par.

```portugol
algoritmo "Ímpar ou Par"
var 
    num: Inteiro
    
inicio
    escreval("Digite um número: ")
    leia(num)
    
    se (num mod 2 = 0) entao
        escreval("Par")
        
    senao     
        escreval("Ímpar")
    fimse    
    
fimalgoritmo
```

### 3-) Pedir 2 números e dizer se ambos são pares.

```portugol
algoritmo "Pares"
var 
    n1, n2: inteiro
    
inicio
    escreval("Digite seu primeiro número: ")
    leia(n1)
    
    escreval("Digite seu segundo número: ")
    leia(n2)
  
    se (n1 mod 2 = 0) e (n2 mod 2 = 0) entao
       Escreval("Os dois são pares")
    
    senao  
       escreval("Pelo menos um dos números não é par")    
    fimse
    
fimalgoritmo
```

### 4-) Mostrar se número é positivo ou negativo.

```portugol
algoritmo "Positivo ou Negativo"
var 
    num: inteiro
    
inicio
    escreval("Digite seu primeiro número: ")
    Leia(num)
  
    se (num > 0) entao
        escreval("Número positivo")
       
    senao
       
        Se (num < 0) entao
            escreval("Número negativo")
    
        senao 
            escreval("É zero") 
        fimse
    fimse
    
fimalgoritmo
```

### 5-) Verificar se número é maior que 10.

```portugol
algoritmo "Maior que 10"
var 
    num: real
    
inicio
    escreval("Digite seu primeiro número: ")
    leia(num)
  
    se (num > 10) entao
       escreval("Maior que 10")
       
    senao
       escreval("Não é maior que 10") 
    fimse
    
fimalgoritmo
```

## FASE 4 - ENQUANTO (loop)
<img src="https://img.shields.io/badge/FEITO NO-%2BVisuAlg-orange"> 

### 1-) Mostrar números de 1 ao 10.

```portugol
algoritmo "1 ao 10"
var
    i: inteiro
inicio

    i <- 1
    
    enquanto (i <= 10) faca
        escreval(i)
        i <- i + 1
    fimenquanto
    
fimalgoritmo
```

### 2-) Mostrar números de 10 ao 1.

```portugol
algoritmo "10 ao 1"
var
    i: inteiro
inicio

    i <- 10
    
    enquanto(i >= 1) faca
        escreval(i)
        i <- i - 1
    fimenquanto
    
fimalgoritmo
```

### 3-) Somar números até 5.

```portugol
algoritmo "Somar até 5"
var
    num, soma, contador: inteiro
inicio

    soma <- 0
    contador <- 1
    
    enquanto (contador <= 5) faca
        escreval("Informe um número: ")
        leia(num)
        
        soma <- soma + num
        contador <- contador + 1
    fimenquanto
    
    escreval("A soma dos números é: ", soma)
    
fimalgoritmo
```

### 4-) Pedir número ate digitar 0.

```portugol
algoritmo "Soma até 0"
var
    soma, num: inteiro
inicio

    soma <- 0
    
    escreval("Informe um número (0 para parar): ")
    leia(Num)
    
    enquanto (num <> 0) faca
        soma <- soma + num
    
        escreval("Informe um número (0 para parar): ")
        leia(num)
    fimenquanto
    
    escreval("A soma total é: ", soma)
    
fimalgoritmo
```

### 5-) Mostrar tabuada simples.

```portugol
algoritmo "Tabuada"
var
    num, contador: inteiro
inicio
    
    escreval("Informe um número: ")
    leia(num)
    
    contador <- 1
    
    enquanto (contador <= 10) faca
        escreval(num, "x", contador, "= ", num * contador)
        contador <- contador + 1
    fimenquanto
    
fimalgoritmo
```

## FASE 5 - PARA (for)
<img src="https://img.shields.io/badge/FEITO NO-%2BVisuAlg-yellow"> 

### 1-) Mostrar de 1 até 10.

```portugol
algoritmo "1 Até 10"
var 
    i: inteiro
inicio
    
    para i de 1 ate 10 faca
        escreval(i)
    fimpara
    
fimalgoritmo
```

### 2-) Mostrar só pares até 20.

```portugol
algoritmo "Pares até 20"
var 
    num: inteiro
inicio
    
    para num de 2 ate 20 passo 2 faca 
        escreval(num)
    fimpara
    
fimalgoritmo
```

### 3-) Somar números de 1 a 5.

```portugol
algoritmo "1 ao 5"
var 
    num, soma: inteiro
inicio
    
    soma <- 0
    
    para num de 1 ate 5 faca
        soma <- soma + num
    fimpara
    
    escreval("Resultado: ", soma)
    
fimalgoritmo
```

### 4-) Tabuada de um número.

```portugol
algoritmo "Tabuada"
var 
    num, i: inteiro
inicio

    escreval("Informe um número: ")
    leia(num)
     
    para i de 1 ate 10 faca
        Escreval(num, "x", i, "=", num * i)
    fimpara
    
fimalgoritmo
```

### 5-) Contagem regressiva.

```portugol
algoritmo "Contagem Regressiva"
var 
    i: inteiro
inicio
     
    para i de 10 ate 1 passo -1 faca
        escreval(i)
    fimpara
    
fimalgoritmo
```
