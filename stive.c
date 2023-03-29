#include "stive.h"

Data top(Node *top){
	if (isEmpty(top)) return CHAR_MIN;
	return top->val;
}

void push(Node**top, Data v) {
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->val=v;
	newNode->next=*top;
	*top=newNode;
}

Data pop(Node**top) {
	if (isEmpty(*top)) return CHAR_MIN;
	Node *temp=(*top);
	Data aux=temp->val;
	*top=(*top)->next;
	free(temp);
	return aux;
}

int isEmpty(Node*top){
	return top==NULL;
}

void deleteStack(Node**top){
	Node  *temp;
	while (!isEmpty(*top)){
		temp=*top;
		*top=(*top)->next;
		free(temp);
	}
}
void verificare_paranteze(Data s[]) {
    Node *top=NULL;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '(' )
            push(&top, i);
        if (s[i] == ')') {
            if(isEmpty(top))
                printf("Paranteza nedeschisa la pozitia %d\n",i+1);
            else
                pop(&top);
        }
    }
    while (!isEmpty(top)) {
        printf("Paranteza neinchisa la pozitia %d\n", pop(&top)+1);
    }
}
