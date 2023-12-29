//linked list that implements data at the end:
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void addlast(struct node **head, int val);
void printlist(struct node *head);
int main(){
    struct node *head = NULL;
    addlast(&head, 10);
    addlast(&head, 20);
    addlast(&head, 30);

    printlist(head);
    
    return 0;
}
void addlast(struct node **head, int val){
    struct node *nNode = malloc(sizeof(struct node));
    
    nNode->data = val;
    nNode->next = NULL;
    if (*head == NULL)
    {
        *head = nNode;
    }else
    {
        struct node *lNode = *head;
        while (lNode->next != NULL)
        {
            lNode = lNode->next;   
        }
        lNode->next = nNode;    
    } 
}
void printlist(struct node *head){
    struct node *tmp = head;
    while (tmp != NULL)
    {
        printf("%d-> ", tmp->data);
        tmp = tmp->next;
    }
    printf("NULL\n");
}