#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "lianbiao.h"
#include "sort.h"

int main()
{
    student *head;
    student *node;
    char *nodestr = "9";
    int str[10] = {12,85,25,16,34,23,49,95,17,61};
    int i;

    head = creatlb();
    printflb(head);
    head = deletelb(head,"11");
    printf("deleted\n");
    printflb(head);
    node = (student *) malloc (sizeof(student));
    strcpy(node->num,nodestr);
    strcpy(node->name,nodestr);
    node->chj = 9;
    head = insertlb(head,"1",node);
    printflb(head);

    QuickSort(str,0,9);
    for(i=0;i<10;i++)
    {
        printf("%-3d",str[i]);
    }

    system("pause");
}
