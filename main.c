#include "cozi.h"

int main()
{
    Queue *q=createQueue();
    for(int i=0;i<5;i++){
        enQueue(q,i+1);
    }
    displayQueue(q);
    invers(q);
    displayQueue(q);
    return 0;
}
