#ifndef LIANBIAO_H
#define LIANBIAO_H

typedef struct STUDENT
{
    char num[20];
    char name[20];
    int chj;
    struct STUDENT *next;
}student;

student *creatlb();
void printflb(student *head);
student *deletelb(student *head,char *num);
student *insertlb(student *head,char *num,student *node);

#endif