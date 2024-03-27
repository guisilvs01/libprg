#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H

typedef struct {
    double value;
    int error;
} result_t;

typedef enum { SUM, SUB } operation_t;

result_t sub(double a, double b);
result_t sum(double a, double b);
result_t compute(double a, double b, operation_t op);

// Lista

typedef struct ListaLinear lista_t;

lista_t* criarListaLinear();
void inserirElemento(lista_t *lista, int elemento);
int removerElemento(lista_t *lista, int elemento);

int buscaLinear (lista_t * lista, int valor);
int buscaBináriaiterativa (lista_t * lista, int valor);
int buscaBinária recursiva (lista_t * lista, int valor, int inicio, int fim);



#endif

/*
 * lista* criar lista (int capacidade, int* elementos, bool ordenada) ou (bool ordenada)
 * void ou lista* ou int  inserir (lista* lista, int valor,)
 * "retorno igual o de cima" remover (lista* lista, int valor
 *
 * int busca linear (lista* lista, int valor)
 * int busca binária iterativa (lista* lista, int valor)
 * int busca binária recursiva (lista* lista, int valor, int inicio, int fim)
 *
 * */