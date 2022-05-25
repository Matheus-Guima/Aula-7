//Aula07 - Exemplo01_v2
#include <iostream>
using namespace std;

//fun��o para trocar elementos
void trocar(int *a, int i, int j)
{
	int aux ;
	aux = a[i] ;
	a[i] = a[j] ;
	a[j] = aux ;
}

// Fun��o de Ordena��o r�pida
void quicksort(int *a, int esq, int dir) {
	int i, j, x, aux;
	i = esq;
	j = dir;
	x = a[(esq + dir) / 2]; // piv� central

	// percorrer at� o piv�	
	while (i <= j) {
		while (a[i] < x && i < dir)
			i++; //avan�a
		while (a[j] > x && j > esq)
			j--; //retrocede
		if(i <= j) 
		{	//troca os elementos
			trocar(a,i,j) ;
			i++; //avan�a
			j--; //retrocede
		}
	} //fim do while
	
    // executa a recurs�o
	if (j > esq) 
	    // lado esquerdo
		quicksort(a, esq, j);
	if (i < dir)
	    // lado direito
		quicksort(a, i, dir);
}

// fun��o principal
int main() {
	int vet[] = {6,5,1,3,8,7,2,4} ;
	int t = sizeof(vet) / sizeof(vet[0]) ;

	// Ordena os valores
	quicksort(vet, 0, t-1);

	// Imprime os valores ordenados
	cout << "Valores ordenados: \n";
	for(int i = 0; i < t; i++){
		cout << vet[i] << " ";
	}
	cout << "\n\n";

	return 0 ;
}

