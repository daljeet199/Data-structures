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
//     ptr2->link=ptr;
// }
// struct node *del_first(struct node *head)
// {
//     if (head==NULL)
//     {
//         printf("list is already empty");
//     }
//     else{
//     struct node *ptr=head;
//     head=head->link;
//     free(ptr);
//     ptr=NULL;
//     }
//     return head;
// }
// int main()
// {
//     struct node *head=malloc(sizeof(struct node));
//     head->data=15;
//     head->link=NULL;
//     add_at_end(head,20);
//     add_at_end(head,25);
//     add_at_end(head,30);
//     head=del_first(head);
//     struct node *ptr=head;
//     while (ptr!=NULL)
//     {
//         printf("%d  ",ptr->data);
//         ptr=ptr->link;
//     }
    
//     return 0;
// }
struct node{
    int data;
    struct node *link;
};
void add_at_end(struct node *head,int data)
{
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=NULL;
    struct node *ptr2=head;
    while (ptr2->link!=NULL)
    {
        ptr2=ptr2->link;
    }
    ptr2->link=ptr;
}
struct node *del_first_node(struct node *head)
{
    if(head==NULL)
    {
        printf("list is already empty");
    }
    else
    {
        struct node *ptr=head;
        head=head->link;
        free(ptr);
        ptr=NULL;
    }
    return head;
}
int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=15;
    head->link=NULL;
    add_at_end(head,20);
    add_at_end(head,25);
    add_at_end(head,30);
    head=del_first_node(head);
    struct node *ptr=head;
    while (ptr!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}
