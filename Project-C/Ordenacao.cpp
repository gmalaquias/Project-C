#include "Header.h"

void bubblesort(int vetor[], int tamanho){
	int i, j, aux = 0;
	for (i = tamanho - 1; i > 0; i--){
		for (j = 0; j < i; j++) {
			if (vetor[j] > vetor[j + 1]) {
				int temp;
				temp = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = temp;
			}
		}
	}

}
void bubblesortdesc(int vetor[], int tamanho){
	int i, j, aux = 0;
	for (i = tamanho - 1; i > 0; i--){
		for (j = 0; j < i; j++) {
			if (vetor[j] < vetor[j + 1]) {
				int temp;
				temp = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = temp;
			}
		}
	}

}

void insertionsort(int vetor[], int tamanho){
	int i, j, elem;
	for (i = 1; i< tamanho; i++){
		elem = vetor[i];
		for (j = i - 1; (j >= 0) && (elem<vetor[j]); j--){
			vetor[j + 1] = vetor[j];
		}
		vetor[j + 1] = elem;
	}
}

void insertionsortdesc(int vetor[], int tamanho){
	int i, j, elem;
	for (i = 1; i< tamanho; i++){
		elem = vetor[i];
		for (j = i - 1; (j >= 0) && (elem>vetor[j]); j--){
			vetor[j + 1] = vetor[j];
		}
		vetor[j + 1] = elem;
	}
}

void quicksort(int *v, int esq, int dir){
	int i, j, pivo, aux;
	i = esq;
	j = dir;
	pivo = v[(i + j) / 2];
	//Particionando o Vetor
	do {
		while (v[i] < pivo && i < dir) { i++; }
		while (v[j] > pivo && j > esq) { j--; }
		if (i <= j){
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j--;
		}
	} while (i <= j);

	if (esq < j) quicksort(v, esq, j);
	if (dir > i) quicksort(v, i, dir);
}

void quicksortdesc(int *v, int esq, int dir){
	int i, j, pivo, aux;
	i = esq;
	j = dir;
	pivo = v[(i + j) / 2];
	//Particionando o Vetor
	do {
		while (v[i] < pivo && i < dir) { i++; }
		while (v[j] > pivo && j > esq) { j--; }
		if (i <= j){
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j--;
		}
	} while (i <= j);

	if (esq < j) quicksort(v, esq, j);
	if (dir > i) quicksort(v, i, dir);
}

void shellsort(int vetor[], int tamanho){
	int elem, i, j, gap, k;
	int a[5] = { 9, 5, 3, 2, 1 };
	for (k = 0; k<5; k++){
		gap = a[k];
		for (i = gap; i< tamanho; i++){
			elem = vetor[i];
			for (j = i - gap; (j >= 0) && (elem<vetor[j]); j = j - gap){
				vetor[j + gap] = vetor[j];
			}
			vetor[j + gap] = elem;
		}
	}
}

void shellsortdesc(int vetor[], int tamanho){
	int elem, i, j, gap, k;
	int a[5] = { 9, 5, 3, 2, 1 };
	for (k = 0; k<5; k++){
		gap = a[k];
		for (i = gap; i< tamanho; i++){
			elem = vetor[i];
			for (j = i - gap; (j >= 0) && (elem>vetor[j]); j = j - gap){
				vetor[j + gap] = vetor[j];
			}
			vetor[j + gap] = elem;
		}
	}
}

void shellsort2(int vetor[], int tamanho, int incremento[], int teto){
	int i, j, gap, k, elem;

	for (k = 0; k< teto; k++){
		gap = incremento[k];
		for (i = gap; i<tamanho; i++){
			elem = vetor[i];
			for (j = i - gap; (j >= 0) && (elem<vetor[j]); j = j - gap){
				vetor[j + gap] = vetor[j];
			}
			vetor[j + gap] = elem;
		}
	}
}

void shellsort2desc(int vetor[], int tamanho, int incremento[], int teto){
	int i, j, gap, k, elem;

	for (k = 0; k< teto; k++){
		gap = incremento[k];
		for (i = gap; i<tamanho; i++){
			elem = vetor[i];
			for (j = i - gap; (j >= 0) && (elem>vetor[j]); j = j - gap){
				vetor[j + gap] = vetor[j];
			}
			vetor[j + gap] = elem;
		}
	}
}

void selectionsort(int vet[], int TAM){
	int i, Min, aux, j;

	for (i = 0; i<TAM - 1; i++){
		Min = i;
		for (j = i + 1; j<TAM; j++){
			if (vet[j] < vet[Min]){
				aux = vet[Min];
				vet[Min] = vet[j];
				vet[j] = aux;
			}
		}
	}
}

void selectionsortdesc(int vet[], int TAM){
	int i, Min, aux, j;

	for (i = 0; i<TAM - 1; i++){
		Min = i;
		for (j = i + 1; j<TAM; j++){
			if (vet[j] > vet[Min]){
				aux = vet[Min];
				vet[Min] = vet[j];
				vet[j] = aux;
			}
		}
	}
}



/*6 - ) Fazer um programa que, utilizando ponteiros para um vetor de inteiros com 15 mil itens(gerados randomicamente), implemente todos os algoritmos de ordenação vistos.O programa deverá informar
o tempo necessário para ordenar a lista nos dois sentidos(do maior para o menor e vice - versa).*/
void PreencheVetor(int vet[], int tam){
	for (int i = 0; i < tam; i++)
		vet[i] = rand();
}

void MostraVetor(int vet[], int tam){
	for (int i = 0; i < tam; i++)
	{
		cout << "\n " << vet[i];
	}
}

double calculaTempo(clock_t Ticks[]){
	return (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
}

void IniciaCronometro(clock_t Ticks[]){
	Ticks[0] = clock();
}

void FinalizaCronometro(clock_t Ticks[]){
	Ticks[1] = clock();
}

void OrdenacaoMain(){
	int tam = 15000;
	int vet[15000];
	clock_t Ticks[2];

	PreencheVetor(vet, tam);
	IniciaCronometro(Ticks);
	selectionsort(vet, tam);
	FinalizaCronometro(Ticks);
	printf("\nMetodo de Selecao crescente | Tempo gasto: %g ms.", calculaTempo(Ticks));

	PreencheVetor(vet, tam);
	IniciaCronometro(Ticks);
	selectionsortdesc(vet, tam);
	FinalizaCronometro(Ticks);
	printf("\nMetodo de Selecao decrescente | Tempo gasto: %g ms.", calculaTempo(Ticks));

	PreencheVetor(vet, tam);
	IniciaCronometro(Ticks);
	bubblesort(vet, tam);
	FinalizaCronometro(Ticks);
	printf("\nMetodo de bubblesort crescente | Tempo gasto: %g ms.", calculaTempo(Ticks));

	PreencheVetor(vet, tam);
	IniciaCronometro(Ticks);
	bubblesortdesc(vet, tam);
	FinalizaCronometro(Ticks);
	printf("\nMetodo de bubblesort decrescente | Tempo gasto: %g ms.", calculaTempo(Ticks));

	PreencheVetor(vet, tam);
	IniciaCronometro(Ticks);
	shellsort(vet, tam);
	FinalizaCronometro(Ticks);
	printf("\nMetodo de shellsort crescente | Tempo gasto: %g ms.", calculaTempo(Ticks));

	PreencheVetor(vet, tam);
	IniciaCronometro(Ticks);
	shellsortdesc(vet, tam);
	FinalizaCronometro(Ticks);
	printf("\nMetodo de shellsort decrescente | Tempo gasto: %g ms.", calculaTempo(Ticks));

	PreencheVetor(vet, tam);
	IniciaCronometro(Ticks);
	insertionsort(vet, tam);
	FinalizaCronometro(Ticks);
	printf("\nMetodo de insertionsort crescente | Tempo gasto: %g ms.", calculaTempo(Ticks));

	PreencheVetor(vet, tam);
	IniciaCronometro(Ticks);
	insertionsortdesc(vet, tam);
	FinalizaCronometro(Ticks);
	printf("\nMetodo de insertionsort decrescente | Tempo gasto: %g ms.", calculaTempo(Ticks));

	PreencheVetor(vet, tam);
	IniciaCronometro(Ticks);
	quicksort(vet, 0, tam - 1);
	FinalizaCronometro(Ticks);
	printf("\nMetodo de quicksort crescente | Tempo gasto: %g ms.", calculaTempo(Ticks));

	PreencheVetor(vet, tam);
	IniciaCronometro(Ticks);
	quicksortdesc(vet, 0, tam - 1);
	FinalizaCronometro(Ticks);
	printf("\nMetodo de quicksort decrescente | Tempo gasto: %g ms.", calculaTempo(Ticks));

	MostraVetor(vet, tam);
}