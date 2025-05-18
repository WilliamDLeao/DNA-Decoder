# **Identificador de Genoma**  

<img src = "dna.png ">

## **Visão Geral**  
Projeto que identifica a maior cadeia de códons de uma faixa de DNA.

---

## **Metodologia** 
O programa funciona em 4 etapas:<br>
-1: Na classe Decoder é especificado quais sequências de nucleotídios são válidas <br>
-2: O input.dat fornece a sequência de DNA <br>
-3: A sequencia de DNA é dividida em trios (nucleotídios) <br>
-4: Trios inválidos ou grupos de 2 nucleotídios não podem ser considerados. Portanto, o que vale são os nucleotídios da etapa 1 em sequência. Como resultado, tem-se a maior cadeia válida. <br>
Em pseudocódigo:
   ```bash
    Do início da cadeia de DNA até o fim-3, indo de trio em trio:
        a cadeiaAtual recebe os 3 nucleotídios
            se estiverem na lista de códons aceitos, a cadeiaAtual os mantém e loop segue
            senão, caso o tamanho da cadeiaAtual for maior que o da maior sequencia de nucleotídios, a maior sequencia se torna a cadeiaAtual. CadeiaAtual é esvazeada para o próximo loop
        se a cadeiaAtual for maior que a maior cadeia, a maior cadeia recebe a tual
        RETORNE a maior cadeia de nucleotídios
    
   ```  
---
## **Custo Computacional** 
A função de maior custo para o algoritmo é o for(O(n)). Outras funções, como o find, tem custo equivalente ao tamanho da lista de códons permitidos, que é sempre fixa e será tratada como constante - e portanto, desconsiderada na análise. As comparações e atribuições tem custo O(1) e por isso serão desconsideradas. Tem-se, então, que para esse algoritmo encaixa-se na classe linear de custo no pior caso. Já no melhor caso, o custo será equivalente ao constante(O(1)).
| Caso        | Custo  |
|:----------------:|:---------------:|
| **Melhor caso** | `O(1)`        |
| **Caso médio**  | `O(n)`        |
| **Pior caso**   | `O(n)`    |
---

## **Execução**  

### **Compilação e Execução**  
1. **Compilar e rodar**:  
   ```bash
    make clear
    make
   ```  
---
