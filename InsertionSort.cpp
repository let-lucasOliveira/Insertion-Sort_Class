/*
    Name: InsertionSort.cpp
    Author: Lucas Oliveira
    Date: nov/06/2024
    Description: Algoritmo de implementação do Insertion sort.
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void insertionSort(int vet[], int);
void cleanTerminal ();

int trocas = 0;
int comp = 0;

main()
{
    int vet[] = {15,173,19,24,98,75,77,31,19,14,25,98,13,2};
    int i, tam;
    tam = sizeof(vet) / sizeof(vet[0]);

    printf("Vetor DESORDENADO:\n");
    for(i = 0;i < tam; i++)
        printf("%d|", vet[i]);

    insertionSort(vet, tam);

    printf("\nVetor ORDENADO pelo Insertion Sort:\n");
    for(i = 0;i < tam; i++)
        printf("%d|", vet[i]);

    printf("\n ====>%d<==== quantidades de comparacoes",comp);
    printf("\n ====>%d<==== quantidades de trocas",trocas);
}

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

void cleanTerminal(){
    system("clear") /*|| system("clear")*/;
}