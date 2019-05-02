#include <stdio.h>
#include <stdlib.h>

void QuickSort(int *vet, int esq, int dir);
 
int main(int argc, char** argv){
	int vet[10];
	int i;
 
	for(i = 0; i < 10; i++){
		printf("Digite um valor: ");
		scanf("%d", &vet[i]);
	}
 
	QuickSort(vet, 0, 10 - 1);
	
	system("clear");
	
	printf("Valores ordenados\n");
	
	for(i = 0; i < 10; i++){
		printf("%d\n", vet[i]);
	}
}

void QuickSort(int *vet, int esq, int dir) {
	int i = esq;
	int j = dir;
	int meio = vet[(esq + dir) / 2];
	int y; 
     
    while(i <= j) {
        while(vet[i] < meio && i < dir) {
            i++;
        }
        
        while(vet[j] > meio && j > esq) {
            j--;
        }
        
        if(i <= j) {
            y = vet[i];
            vet[i] = vet[j];
            vet[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > esq) {
        QuickSort(vet, esq, j);
    }
    
    if(i < dir) {
        QuickSort(vet, i, dir);
    }
}
