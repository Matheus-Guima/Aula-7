// Aula07 - Exemplo04
#include <iostream>
#define MAX 10
using namespace std;

// Retorna -1 caso não encontre ou retorna a posição, caso encontre.
int buscasequencial(char vetor[], int tamanho, char chave) {
     for (int i = 0; i < tamanho; i++) 
         if (vetor[i] == chave) 
             return i;
     return -1;
}

int main()
{
	// variáveis
	char v[MAX], x ;
	int posicao ;

	// entrada de dados
	cout << "Conjunto de caracteres - Entrada\n\n" ;
    for (int i=0 ; i<MAX ; i++)     {
		cout << "Digite um caracter: " ;
		cin >> v[i] ;
	}
	
	// Solicitar a chave de busca
	cout << "Digite o caracter a buscar: " ;
	cin >> x ;
    
    // verificar se encontrado
	posicao = buscasequencial(v, MAX, x) ;
    if (posicao == -1)
    	cout << "Caracter nao encontrado\n" ;
      else
    	cout << "Encontrado na posicao: " << posicao << "\n" ;
	
	return 0 ;
}
