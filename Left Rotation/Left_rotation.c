#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL, *x, *y, *z;

void create(int n){
    int c;
    if(head==NULL){
        x=(struct node*)malloc(sizeof(struct node));
        x->data=n;
        x->next=x;
        head=x;
    }
    else{
        y=(struct node*)malloc(sizeof(struct node));
        y->data=n;
        x->next=y;
        y->next=head;
        x=y;
    }
}

void traverse(){
    x=head;
    while(x->next != head){
        printf("%d ", x->data);
        x=x->next;
    }
    printf("%d", x->data);
}

void leftRotate(){
    head=head->next;
}

void main()
{
    int n, d, a;
    scanf("%d %d", &n, &d);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        create(a);
    }
    for(int i=1; i<=d; i++)
        leftRotate();
    traverse();
}

//Using Circular Linked List