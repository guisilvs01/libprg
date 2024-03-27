#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct ListaLinear{
    int *array;
    int size; //index do array;
    int capacidade;
} lista_t;

lista_t * criarListaLinear() {
    lista_t *lista = (lista_t *) malloc(sizeof(lista_t));
    lista->array = (int*)malloc(MAX_SIZE * sizeof(int));
    lista->size = 0;
    lista->capacidade = MAX_SIZE;
    return lista;
}

//void inserirElemento(ListaLinear *lista, int elemento) {
//    if (lista->size < MAX_SIZE) {
//        lista->array[lista->size] = elemento;
//        lista->size++;
//    } else {
//        printf("Lista cheia, impossível inserir elemento.\n");
//    }
//}
//
//void imprimirLista(ListaLinear *lista) {
//    printf("Lista: ");
//    for (int i = 0; i < lista->size; i++) {
//        printf("%d ", lista->array[i]);
//    }
//    printf("\n");
//}
//
//void liberarLista(ListaLinear *lista) {
//    free(lista->array);
//    free(lista);
//}
//
//int main() {
//    ListaLinear *lista = criarListaLinear();
//
//    inserirElemento(lista, 5);
//    inserirElemento(lista, 10);
//    inserirElemento(lista, 3);
//
//    imprimirLista(lista);
//
//    liberarLista(lista);
//
//    return 0;
//}
//

