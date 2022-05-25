// Aula07 - Exemplo06
#include <iostream>
using namespace std;

//Implementação Recursiva:
int busca_binaria_r (int x, int v[], int min, int max) {
  int meio = (min + max)/2;
  if (v[meio] == x)
     return meio;
  if (min >= max)
     return -1; // não encontrado
  else
     if (v[meio] < x)
         return busca_binaria_r(x, v, meio+1, max);
     else
         return busca_binaria_r (x, v, min, meio-1);
}

int main()
{
	// variáveis
	int v[] = {10,12,15,17,18} ;
	int x ;
	int posicao ;

	// Solicitar a chave de busca
	cout << "Digite o valor a buscar: " ;
	cin >> x ;
    
    // verificar se encontrado
	posicao = busca_binaria_r (x, v, 0, 5) ;
    if (posicao == -1)
    	cout << "Valor nao encontrado\n" ;
      else
    	cout << "Encontrado na posicao: " << posicao << "\n o elemento " << v[posicao] ;
	
	return 0 ;
}
