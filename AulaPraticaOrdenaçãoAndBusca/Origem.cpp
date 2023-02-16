#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAMANHOVETOR 10


void bubbleSortCres(int vet[]);
void bubbleSortDec(int vet[]);
void quickSortCres();
void quickSortDec();



int main() {
	srand(time(NULL)); // gera a semente aleatoria
	int i;

	int vet[TAMANHOVETOR] = { 0 };
	
	for( i = 0; i < TAMANHOVETOR; i++)
		vet[i] = rand() % 100;

	printf("VETOR NÃO ORDENADO: \n\n");
	for (i = 0; i < TAMANHOVETOR; i++)
		printf("%d ", vet[i]);

	printf("\n");
	bubbleSortCres(vet);
	printf("VETOR ORDENADO(CRESCENTE): \n\n");

	for (i = 0; i < TAMANHOVETOR; i++)
		printf("%d ", vet[i]);

	printf("\n");
	bubbleSortDec(vet);
	printf("VETOR ORDENADO(DECRESCENTE): \n\n");

	for (i = 0; i < TAMANHOVETOR; i++)
		printf("%d ", vet[i]);

	printf("\n");
	return 0;
}



void bubbleSortCres(int vet[]) {
	int aux;

	for (int n = 1; n < TAMANHOVETOR; n++) {
		for (int i = 0; i < (TAMANHOVETOR - 1); i++) {
			if (vet[i] > vet[i + 1]) {
				aux = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = aux;
			}
		}
	}


}

void bubbleSortDec(int vet[]) {
	int aux;

	for (int n = 1; n < TAMANHOVETOR; n++) {
		for (int i = 0; i < (TAMANHOVETOR - 1); i++) {
			if (vet[i] < vet[i + 1]) {
				aux = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = aux;
			}
		}
	}


}

