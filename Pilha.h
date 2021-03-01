#ifndef PILHA_H
#define PILHA_H

#include "ListaEncadeada.h"

typedef ListaEncadeada Pilha;

Pilha* iniciaPilha();
void destroiPilha(Pilha* umaPilha);
bool pilhaVazia(Pilha* umaPilha);
void* pop(Pilha* umaPilha);
void push(Pilha* umaPilha, void* umDado);

#endif /* PILHA_H */