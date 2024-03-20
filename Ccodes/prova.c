#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura de nó
struct Node {
    char data;
    struct Node* next;
};

// Definição da estrutura de fila
struct Queue {
    struct Node* front;
    struct Node* rear;
};

// Função para criar um novo nó
struct Node* createNode(char data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Função para inicializar a fila
void initializeQueue(struct Queue* q) {
    q->front = NULL;
    q->rear = NULL;
}

// Função para enfileirar um elemento
void enqueue(struct Queue* q, char data) {
    struct Node* newNode = createNode(data);
    if (q->rear == NULL) {
        q->front = newNode;
        q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

// Função para desenfileirar um elemento e retornar seu valor
char dequeue(struct Queue* q) {
    if (q->front == NULL) {
        printf("Fila vazia!\n");
        return '\0';  // Retorno de caractere nulo para indicar uma fila vazia
    }

    struct Node* temp = q->front;
    char data = temp->data;

    if (q->front == q->rear) {
        // Último elemento na fila
        q->front = NULL;
        q->rear = NULL;
    } else {
        q->front = q->front->next;
    }

    free(temp);
    return data;
}

// Função para imprimir o valor do elemento removido da fila
void imprimaElementoRemovido(char data) {
    printf("Elemento removido: %c\n", data);
}

int main() {
    // Inicializa a fila
    struct Queue fila;
    initializeQueue(&fila);

    // Executa as operações solicitadas
    enqueue(&fila, 'x');
    dequeue(&fila);
    enqueue(&fila, 'x');
    enqueue(&fila, 'o');
    dequeue(&fila);
    enqueue(&fila, 'i');
    dequeue(&fila);
    enqueue(&fila, 'u');
    enqueue(&fila, 'x');
    enqueue(&fila, 'i');
    dequeue(&fila);

    // Imprime o valor do elemento removido da fila
    printf(&fila);
    imprimaElementoRemovido(dequeue(&fila));

    return 0;
}
