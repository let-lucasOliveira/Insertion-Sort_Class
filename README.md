# Insertion Sort

## Aqui é mostrado o código do algoritmo de ordenação Insertion Sort.
### Feito em lingagem C.

## O algorimo foi mostrado na aula de Estrutura de Dados, Fatec - Santana de Parnaíba.
### O código foi escrito por mim, sob a orientaçao do professor e coordenador do curso de Análise e Desenvolvimento de sistema, Alexandre Cassiano.
    
## Resultado:
```c
        void insertionSort(int vet[], int tam){
            printf("\n");
            int i, j, chave;

            for(i = 1; i < tam; i++){
                comp++;
                chave = vet[i];
                j = i -1;

                while(j >= 0 && vet[j] > chave){
                    trocas++;
                    comp++;
                    vet[j+1] = vet[j];
                    j = j -1;
                }
                vet[j + 1] = chave;
            }
        }
