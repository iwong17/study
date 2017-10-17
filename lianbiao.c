#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lianbiao.h"

int n;

student *creatlb()
{
    student *head;
    student *new;
    student *end;
    n = 0;

    new = (student *) malloc (sizeof(student));
    end = new;

    printf("please input the %d infomation\n",n+1);
    scanf("%s %s %d",new->num,new->name,&(new->chj));

    while(strcmp(new->num,"0"))
    {
        n++;
        if(n == 1)
        {
            head = new;
        }
        else
        {
            end->next = new;
        }
        end = new;
        new = (student *) malloc (sizeof(student));
        printf("please input the %d infomation\n",n+1);
        scanf("%s %s %d",new->num,new->name,&(new->chj));
    }
    free(new);
    new = NULL;
    end->next = NULL;
    return head;
}

void printflb(student *head)
{
    student *temp;
    temp = head;

    if(temp == NULL)
    {
        printf("this is null\n");
    }
    else
    {
        printf("there hava %d informations,the infomations are...\n",n);
        do
        {
            printf("%s %s %d\n",temp->num,temp->name,temp->chj);
            temp = temp->next;
        }
        while(temp != NULL);
    }
}

student *deletelb(student *head,char *num)
{
    student *curr;
    student *has;
    curr = head;

    if(curr == NULL)
    {
        printf("this is null\n");
    }
    else
    {
        while(curr != NULL)
        {
            if(strcmp(curr->num,num) == 0)
            {
                if(curr == head)
                {
                    head = head->next;
                }
                else
                {
                    has->next = curr->next;
                }
                curr = curr->next;
                n--;
            }
            else
            {
                has =curr;
                curr = curr->next;
            }
        }
    }
    return head;
}

student *insertlb(student *head,char *num,student *node)
{
    student *curr;
    int insertnum = 0;
    if(head == NULL)
    {
        head = node;
        node->next = NULL;
        n +=1;
        return head;
    }
    else
    {
        curr = head;
        while(curr != NULL)
        {
            if(strcmp(curr->num,num) == 0)
            {
                node->next = curr->next;
                curr->next = node;
                n +=1;
                insertnum++;
                curr = node->next;
            }
            else
            {
                curr = curr->next;
            }
        }
    }
    printf("insert %d\n",insertnum);
    return head;
}



