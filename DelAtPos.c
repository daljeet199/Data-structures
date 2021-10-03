#include<stdio.h>
#include<stdlib.h>
// struct node{
//     int data;
//     struct node *link;
// };
// void add_at_end(struct node *head,int data)
// {
//     struct node *ptr=malloc(sizeof(struct node));
//     ptr->data=data;
//     ptr->link=NULL;
//     struct node *ptr2=head;
//     while (ptr2->link!=NULL)
//     {
//         ptr2=ptr2->link;
//     }
//      ptr2->link=ptr;
// }
// struct node *del_at_pos(struct node **head,int pos)
// {
//     struct node *previous=*head;
//     struct node *current=*head;
//     if(*head==NULL)
//     {
//         printf("list is already empty");
//     }
//     else if (pos==1)
//     {
//         *head=current->link;
//         free(current);
//         current=NULL;
//     }
//     else
//     {
//         while (pos!=1)
//         {
//             previous=current;
//             current=current->link;
//             pos--;
//         }
//         previous->link=current->link;
//         free(current);
//         current=NULL;
//     }
//     return *head;
// }
// int main()
// {
//     struct node *head=malloc(sizeof(struct node));
//     head->data=15;
//     head->link=NULL;
//     add_at_end(head,20);
//     add_at_end(head,25);
//     add_at_end(head,30);
//     int position=3;
//     head=del_at_pos(&head,position);
//     struct node *ptr=head;
//     while (ptr!=NULL)
//     {
//         printf("%d  ",ptr->data);
//         ptr=ptr->link;
//     }
//     return 0;
// }
struct node {
    int data;
    struct node *link;
};
void add_at_end(struct node *head,int data)
{
    struct node *ptr1=malloc(sizeof(struct node));
    ptr1->data=data;
    ptr1->link=NULL;
    struct node *ptr2=head;
    while (ptr2->link!=NULL)
    {
        ptr2=ptr2->link;
    }
    ptr2->link=ptr1;
}
struct node *del_at_end(struct node **head,int pos)
{
    struct node *previous=*head;
    struct node *current=*head;
    if (*head==NULL)
    {
        printf("list is alredy empty");
    }
    else if (pos==1)
    {
        *head=current->link;
        free(current);
        current=NULL;
    }
    else
    {
        while (pos!=1)
        {
            previous=current;
            current=current->link;
            pos--;
        }
        previous->link=current->link;
        free(current);
        current=NULL;
    }
    return *head;
}
int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=15;
    head->link=NULL;
    add_at_end(head,20);
    add_at_end(head,25);
    add_at_end(head,30);
    int pos=3;
    head=del_at_end(&head,pos);
    struct node *ptr=head;
    while (ptr!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}
