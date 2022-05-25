//Aula07 - Exemplo02
#include <iostream>
#define MAX 8
using namespace std;

//fun��o imprimir vetor
void imprimir_array(int *a, int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << "\n";
}

// Fun��o de Ordena��o r�pida
void quicksort(int *a, int esq, int dir) {
	int i, j, x, aux;
	i = esq;
	j = dir;
	x = a[(esq + dir) / 2]; // piv� central

	cout << "Esq:" << i << " [" << a[i] << "]";	
	cout << " Dir:" << j << " ["  << a[j] << "]";
	cout << " Pivo:[" << x << "]\n" ;
	// exibir o vetor temporariamente
    imprimir_array(a, MAX) ;
    getchar() ;
    
	while (i <= j) {
		while (a[i] < x && i < dir)
			i++; // avan�a
		while (a[j] > x && j > esq)
			j--; //retrocede
		if(i <= j) 
		{
			//troca os elementos
			aux = a[i];
			a[i] = a[j];
			a[j] = aux;
			i++;
			j--;
		}
	}
	
    // executa a recurs�o
	if (j > esq) 
		quicksort(a, esq, j);
	if (i < dir)
		quicksort(a, i, dir);
}

// fun��o principal
int main() {
	int vet[] = {6,5,3,1,8,7,2,4} ;
	int t = sizeof(vet) / sizeof(vet[0]) ;

	// Ordena os valores
	quicksort(vet, 0, t-1);

	// Imprime os valores ordenados
	cout << "Valores ordenados: \n";
    imprimir_array(vet, t) ;

	return 0 ;
}

