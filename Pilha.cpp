#include "Pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int tamanho = 0;

Pilha* iniciaPilha()
{
	Pilha *umaPilha = iniciaListaEncadeada();

	return umaPilha;
}

void destroiPilha(Pilha* umaPilha)
{
	int tinicial = tamanho;
    for(int i = tinicial; i > 0; i--)
    {
        pop(umaPilha);
	}

	tamanho = 0;
	delete umaPilha;

	return;
}

bool pilhaVazia(Pilha* umaPilha)
{
	if (tamanho == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void* pop(Pilha* umaPilha) //arrumado
{
	Elemento* saiu; //auxiliar
	void* volta;
	if (pilhaVazia(umaPilha))
	{
		throw lista_encadeada_vazia_exception();
	}
	else
	{
		saiu = umaPilha->_primeiro;
		volta = saiu->_dado;
		umaPilha->_primeiro = saiu->_proximo;
		umaPilha->_quantidade = umaPilha->_quantidade-1;
		tamanho--;

		delete saiu;
	}
	return volta;
}

void push(Pilha* umaPilha, void* umDado) //arrumado
{
	Elemento* novo = new Elemento;
	if (novo == NULL) //testa se é possível
	{
		throw("ERROSEMMEMORIA");
	}
	else
	{
		novo -> _proximo = umaPilha -> _primeiro; //fazer o próximo do novo ser o primeiro
		novo -> _dado = umDado;
		umaPilha -> _primeiro = novo; //fazer a cabeça apontar para o novo
		umaPilha -> _quantidade = umaPilha -> _quantidade + 1;
		tamanho++;
	}

	return;
}