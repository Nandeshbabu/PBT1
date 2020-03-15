#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int d;
    struct Node* next;
};
void printMiddle(struct Node *head)
{
    struct Node *s_ptr = head;
    struct Node *f_ptr = head;
    if(head!=NULL)
    {
        while (f_ptr != NULL && f_ptr->next != NULL)
        {
            f_ptr = f_ptr->next->next;
            s_ptr = s_ptr->next;
        }
        printf("The middle element is [%d]\n\n", s_ptr->d);
    }
}
void push(struct Node** head_ref, int new_d)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_d;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void printList(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d->", p->d);
        p = p->next;
    }
    printf("NULL\n");
}
int main()
{
    struct Node* head = NULL;
    int i,n,n1;
    scanf("%d",&n1);
    for (i=n1;i>0;i--)
    {
        scanf("%d",&n);
        push(&head,n);
        printList(head);
        printMiddle(head);
    }
    return 0;
}