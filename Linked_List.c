#include<stdio.h>
#include<stdlib.h>
struct node{
    int d;
    struct node* next;
};
typedef struct node node;
node* head=NULL;
node* createList(node*,int n);
void displayList(node*);

int main(){
    printf("\nCreate List with how many elements: \n");
    int n;
    scanf("%d",&n);
    head=createList(head,n);
    printf("\nThe List is:\n");
    displayList(head);
    return 0;
}
node* createList(node* head,int n){
    node* temp =head;
    while(n!=0){
        node* newNode=(node*) malloc(sizeof(node));
        printf("\nEnter data into new Node:\n");
        scanf("%d",&newNode->d);
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            temp=head;
        }
        else{
            temp->next=newNode;
            temp=newNode;
        }
        n--;

    }
    return head;
}
void displayList(node* head){
    if(head==NULL)
    return;
    else{
        node* ptr =head;
        while(ptr!=NULL){
            if(ptr->next!=NULL)
            printf("%d->",ptr->d);
            else
            printf("%d",ptr->d);
            ptr=ptr->next;
        }
    }
}