// Aula07 - Exemplo05
#include <iostream>
using namespace std;

int busca_binaria (int v[], int n, int x) {
   int inf, meio, sup;
   inf = 0; 
   sup = n-1;
   while (inf <= sup) { 
      meio = (inf + sup)/2; 
      if (v[meio] == x)
         return meio ;
      if (v[meio] < x) 
         inf = meio + 1;
      else 
         sup = meio - 1;
   }
   return -1;
}

int main()
{
	// variáveis
	int v[] = {10,12,15,17,18,100,120,150,170,180} ;
	int x ;
	int posicao ;

	// Solicitar a chave de busca
	cout << "Digite o valor a buscar: " ;
	cin >> x ;
    
    // verificar se encontrado
	posicao = busca_binaria(v, 10, x) ;
    if (posicao == -1)
    	cout << "Valor nao encontrado\n" ;
      else
    	cout << "Encontrado na posicao: " << posicao << "\n" ;
	
	return 0 ;
}
