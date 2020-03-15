#include <stdio.h>
#include <stdlib.h>
struct Node {
    int d;
    struct Node* next;
};
static void reverse(struct Node** head_ref)
{
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
    struct Node* next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}
void push(struct Node** head_ref, int new_d)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->d = new_d;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void printList(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL)
    {
        printf("%d  ", temp->d);
        temp = temp->next;
    }
}
int main()
{
    struct Node* head = NULL;
    int n,d,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&d);
        push(&head,d);
    }
    printList(head);
    reverse(&head);
    printList(head);
}