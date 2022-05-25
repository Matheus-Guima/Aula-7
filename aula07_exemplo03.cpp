// Aula07 - Exemplo03
// QuickSort otimizado
#include <iostream>
using namespace std ;

//fun��o imprimir vetor
void imprimirArray(int *a, int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << "\n";
}

// Par�metros por refer�ncia no C++
void trocar (int &a, int &b) {
	int aux ;
	aux = a ;
	a = b ;
	b = aux ;
}

void quickSort(int vet[], int esquerda, int direita){
	int pivo, j;
	if (direita > esquerda) {
	    pivo = esquerda; // piv� no in�cio
		for (j = esquerda + 1; j <= direita; j++) {
			if (vet[j] < vet[esquerda]) {
				pivo++ ;
				trocar(vet[pivo], vet[j]);
			}
		}
		trocar(vet[esquerda], vet[pivo]);  
		quickSort(vet, esquerda, pivo - 1);  
		quickSort(vet, pivo + 1, direita);
	}
}

int main() {
	int v[] = {6,5,3,1,8,7,2,4} ;
	int t = sizeof(v) / sizeof(v[0]) ;
	quickSort(v,0,t-1) ;
	
    imprimirArray(v,t) ;		
	return 0 ;
}


