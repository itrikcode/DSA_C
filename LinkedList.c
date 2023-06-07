#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
}; // self referential structure
struct node *start = NULL;
void insertAtEnd(int item)
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("insufficient Memory");
        exit(0);
    }
    temp->data = item;
    temp->link = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }

        ptr->link = temp;
    }
}

void insertAtBegin(int item)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("insufficient Memory");
        exit(0);
    }
    temp->data = item;
    temp->link = start;
    start = temp;
}
void insetAtAnyPostion(int pos, int item)
{
    struct node *temp, *ptr;
    int i;
    if (start == NULL)
    {
        printf("insdie if");
    }
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("insufficient Memory");
        exit(0);
    }
    temp->data = item;
    temp->link = start;
    if (pos == 1)
    {
        temp->data = item;
        start = temp;
    }
    else
    {
        ptr = start;

        for (i = 1; i <= pos - 2 && ptr != NULL; i++)
        {
            ptr = ptr->link;
        }
        if (ptr == NULL)
        {
            printf("invalid Postion !!! ");
            return;
        }

        temp->link = ptr->link;
        ptr->link = temp;
    }
}
int main(void)
{
    int ch, item, pos;
    struct node *ptr;
    while (1)
    {
        printf("\n\n********************single linked list************\n");
        printf("\n 1.Create Linked list by insertion at End");
        printf("\n 2. Create Linked List by Insertin at  Begin");
        printf("\n 3.Disply the linked list");
        printf("\n 4.Exit");
        printf("\n 5. Insert At any Postion of Linked List");
        printf("\n Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter Element :");
            scanf("%d", &item);
            insertAtEnd(item);
            break;
        case 2:
            printf("Enter Element insert at begin");
            scanf("%d", &item);
            insertAtBegin(item);
            break;
        case 3:

            if (start == NULL)
            {
                printf("NO Node");
            }
            else
            {
                ptr = start;
                printf("start->");
                while (ptr != NULL)
                {
                    printf("%d->", ptr->data);
                    ptr = ptr->link;
                }
                printf("NULL");
            }
            break;
        case 4:
            exit(0);
            break;
        case 5:
            printf("Enter Item to be inserted");
            scanf("%d", &item);
            printf("Enter the postion of insertion");
            scanf("%d", &pos);
            insetAtAnyPostion(pos, item);
            break;
        default:
            break;
        }
    }
}
