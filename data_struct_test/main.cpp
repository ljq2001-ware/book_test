#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct stack
{
    struct node *stackTop;
    int size;
};
struct stack *creatstack()
{
    struct stack *myStack = (struct stcak*)malloc(sizeof(struct stack));
    myStack->stackTop = NULL;
    myStack->size = 0;
    return myStack;
};
void push(struct stack *myStack,int data)
{
    struct node *newNode = creatstack

}
int main()
{


    return 0;
}
