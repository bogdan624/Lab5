#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
	char val;
	struct Node *next;
}Node;
char top(Node *top);
void push(Node**top, char v);
char pop(Node**top);
int isEmpty(Node*top);
void deleteStack(Node**top);

