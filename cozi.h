#include <stdlib.h>
#include <stdio.h>

struct Elem{
    int val;
    struct Elem *next;
};
typedef struct Elem Elem;
struct Q{
    Elem *front,*rear;
};
typedef struct Q Queue;
Queue* createQueue();
void enQueue(Queue*q, int v);
int deQueue(Queue*q);
int isEmptyC(Queue*q);
void deleteQueue(Queue*q);
