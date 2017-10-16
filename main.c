#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "lianbiao.h"
#include "sort.h"

int main()
{
    student *head;
    int str[10] = {12,85,25,16,34,23,49,95,17,61};
    int i;

    head = creatlb();
    printflb(head);
    head = deletelb(head,"11");
    printf("deleted\n");
    printflb(head);

    QuickSort(str,0,9);
    for(i=0;i<10;i++)
    {
        printf("%-3d",str[i]);
    }

    system("pause");
}
