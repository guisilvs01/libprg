#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H

typedef struct {
    double value;
    int error;
} result_t;

typedef enum { SUM, SUB } operation_t;

int buscaLinear (lista* lista, int valor);
int buscaBináriaiterativa (lista* lista, int valor);
int buscaBinária recursiva (lista* lista, int valor, int inicio, int fim);

result_t sub(double a, double b);
result_t sum(double a, double b);
result_t compute(double a, double b, operation_t op);

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