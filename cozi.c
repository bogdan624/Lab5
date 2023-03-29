#include "cozi.h"

Queue* createQueue(){
	Queue *q;
	q=(Queue *)malloc(sizeof(Queue));
	if (q==NULL) return NULL;
	q->front=q->rear=NULL;
	return q;
}

 void enQueue(Queue*q, int v){
	Elem* newElem=(Elem*)malloc(sizeof(Elem));
	newElem->val=v;
	newElem->next=NULL;
	if (q->rear==NULL) q->rear=newElem;
	else{
		(q->rear)->next=newElem;
		(q->rear)=newElem;
	}
	if (q->front==NULL) q->front=q->rear;
}

int deQueue(Queue*q) {
	Elem* aux; int d;
	if (isEmptyC(q)) return INT_MIN;

	aux=q->front;
	d=aux->val;
	q->front=(q->front)->next;
	free(aux);
	return d;
}

int isEmptyC(Queue*q){
	return (q->front==NULL);
}

void deleteQueue(Queue*q){
	Elem* aux;
	while (!isEmptyC(q)){
		aux=q->front;
		q->front=q->front->next;
		free(aux);
	}
	free(q);
}
