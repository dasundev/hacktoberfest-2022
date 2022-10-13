#include<stdio.h>
#include<stdlib.h>
typedef struct list{
    int key;
    struct list *next;
}Node;
Node *head=NULL;
Node *tail=NULL;
void insertAtFirst(int k){
    Node *x=(Node*)malloc(sizeof(Node));
    x->key=k;
    x->next=head;
    if(head==NULL){
        tail=head=x;
        tail->next=x;
        return;
    }
    head=x;
    tail->next=head;
    return;
}
void insertAtLast(int k){
    Node *x=(Node*)malloc(sizeof(Node));
    x->key=k;
    if(head==NULL){
        head=tail=x;
        head->next=tail;
        tail->next=head;
        return;
    }
    x->next=head;
    tail->next=x;
    tail=x;
}
int deleteAtFirst(){
    Node *x=head;
    int data=head->key;
    if(head==tail){
        head=tail=NULL;
        x->next=NULL;
        free(x);
        return data;
    }
    head=head->next;
    tail->next=head;
    x->next=NULL;
    free(x);
    return data;
}
int deleteAtLast(){
    Node* x=tail,*temp=head;
    int data=tail->key;
    if(head==tail){
        head=tail=NULL;
        x->next=NULL;
        free(x);
        return data;
    }
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=head;
    x->next=NULL;
    free(x);
    tail=temp;
    return data;
}
void RevLinkedList(){
    Node *x=head,*y,*z;
    if(head==NULL || head->next==head){
        return;
    }
    y=x->next;
    z=y->next;
    tail=x;
    while(1){
        y->next=x;
        if(z==head){
            head->next=y;
            head=y;
            break;
        }
        x=y;
        y=z;
        z=y->next;
    }
}
void display(){
    Node *y=head;
    printf("\n");
    if(head==NULL){
        printf("NO ELEMENTS");
        return;
    }
    while(y->next!=head){
        printf("%d -->",y->key);
        y=y->next;
    }
    printf("%d-->NULL",y->key);
}
int main(){
    insertAtLast(2);
    display();
    insertAtFirst(1);
    display();
    insertAtLast(3);
    display();
    RevLinkedList();
    display();
    deleteAtLast();
    display();
    deleteAtFirst();
    display();
    deleteAtLast();
    display();
    insertAtFirst(10);
    display();
    deleteAtFirst();
    display();
    insertAtFirst(90);
    display();
    deleteAtLast();
    display();
    return 0;
}