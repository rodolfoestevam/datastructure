#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//recursao dado um  dado no dataNode, uma referencia para o próximo nó

typedef struct dataNode{
    int id;
} DataNode;

typedef struct node {
    DataNode data;
    struct node* next;
} Node;

typedef struct list{
    int size;
    Node* head;
} List; 

//definicao dos headers
List* createList();
void push(List* list, DataNode data);
void printList(List* list);
void pop(List* list);
bool isEmpty(List* list);
Node* atPos(List* list, int index);

List* createList() {
    List* list = (List*) malloc(sizeof(list));

    list->size = 0;
    list->head = NULL;

    return list;
}

void push(List* list, DataNode data){
    Node* node = (Node*) malloc(sizeof(Node));

    node->data = data;
    node->next = list->head;
    list->head = node;
    list->size++;
}

void printList(List* list){

if(isEmpty(list)) {
    printf("Lista vazia");
    return;
}
    Node* pointer = list->head;

    while (pointer != NULL){
        printf("%d ", pointer->data.id);
        pointer = pointer->next;
    }
    printf(" /n");
}

bool isEmpty(List* list){
    return (list->size == 0);
}

void pop(List* list){
    if (!isEmpty(list)) {
    Node* pointer = list->head;
    
    list->head = pointer->next;
    free(pointer);
    list->size--;
    }
}

Node* atPos(List* list, int index) {

    if(index >= 0 && index < list->size) {
        Node* node = list->head;

        int i;
        for(i =0; i< index; i++)
            node = node->next;

            return node;
    }
    printf("Indice invalido!/n");
    return NULL;

}

int main(){
    List* l = createList();

    DataNode data;
    
    data.id = 5;
    push(l, data);
    
    data.id = 9;
    push(l, data);

    printList(l);

    printf("%d", atPos(1,1)->data.id);


}