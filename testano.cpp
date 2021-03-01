#include "Pilha.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int choice = 0;
	ListaEncadeada *minhaPilha = iniciaPilha();

	while(choice != 13)
	{
		cout << "1. destroi a pilha" << endl;
		cout << "2. pilha e vazia?" << endl;
		cout << "3. tira da pilha" << endl;
		cout << "4. colocr na pilha" << endl;
		cout << "5. qual o elemento no topo da pila?" << endl;
		cout << "6. tamanho da pialja" << endl;
		cout << "opacao: ";

		cin >> choice;

		if (choice==1)
		{
			destroiPilha(minhaPilha);
		}
		else if (choice==2)
		{
			if (pilhaVazia(minhaPilha)==true)
			{
			 	cout << "e vazia" << endl;
			} 
			else
			{
				cout << "n e" << endl;
			}
		}

		else if (choice==3)
		{
			pop(minhaPilha);
		}
		else if (choice==4)
		{
			void* dado;
			cout << "fala o dado pr adiicnoa: ";
			cin >> dado;

			push(minhaPilha, dado);
		}
		else if (choice==5)
		{
			if (pilhaVazia(minhaPilha))
			{
				cout << "pilha vazia" << endl;
			}
			else
			{
				Elemento *peimeirinho = minhaPilha->_primeiro; 
				cout << (int*) peimeirinho->_dado << endl;	
			}
		}
		else if (choice==6)
		{
			if (pilhaVazia(minhaPilha))
			{
				cout << "0" << endl;
			}
			else
			{
				cout << minhaPilha->_quantidade << endl;
			}
		}
		else
		{
			if (!pilhaVazia(minhaPilha))
			{
				destroiPilha(minhaPilha);
			}
			choice = 13;
		}
	}

	return 0;
}