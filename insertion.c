#include <stdlib.h>
#include <stdio.h>
#include <time.h>


void insertionsort(int vector[], int n){
    int i, chave;
    for(int j= 1; j<n; j++){
        chave = vector[j];
        i=j-1;
        do
        {
            vector[i+1]=vector[i];
            i=i-1;
        } while (i>=0 && vector[i]>chave);
        vector[i+1]= chave;
    }
}

int main(int argc, char const *argv[])
{
    int tam= 500000;
    int vector[tam];
    // for(int k=0; k<tam; k++){
    //     vector[k]=rand();
    // }
    // for(int k=0; k<tam; k++){
    //     vector[k]=k;
    // }
    int x= tam;
    for(int k=0; k<tam; k++){
        x=x-1;
        vector[k]=x;
    }
    clock_t begin = clock();
    insertionsort(vector,tam);
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo gasto: %f ", time_spent);
    // for(int k=0; k<tam; k++){
    //     printf("%i ",vector[k]);
    // }
    return 0; 
}
