# Questão 4

A questão 4 consiste no desenvolvimento de um programa que implementa e utiliza uma função ConcatERemove(s,t,k), que deve retornar resultados 'sim' ou 'não'. Onde a função possui os seguintes parâmetros:
- s: string inicial
- t: string desejada
- k: um número inteiro que representa o número de operações

#### Formato de Entrada: 
- A primeira linha contêm a string s, a string inicial.
- A segunda linha contém a string t, a string desejada.
- A terceira linha contém um inteiro k, o número de operações.

#### Limitações:
- 1 <= |s| <= 100
- 1 <= |t| <= 100
- 1 <= k <= 100
- s e t consiste de letras minúsculas do alfabeto português, ascii[a-z]

#### Formato de Saída:
Imprimir 'sim' se puder obter a string t executando exatamente k operações sobre a string s, e imprimir 'não' no caso contrário.

## Exemplos:

#### Exemplo 1:
- string s: blablablabla
- string t: blablabcde
- número de operações: 8
- resultado esperado: sim


#### Exemplo 2:
- string s: ashley
- string t: ash
- número de operações: 2
- resultado esperado:não
