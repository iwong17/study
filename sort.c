#include <string.h>

void QuickSort(int *str,int begin,int end)
{
    if(begin >= end)
    {
        return;
    }
    else
    {
        int i = begin;
        int j = end;
        int key = str[begin];
        
        while(i<j)
        {
            while(i < j && key <= str[j])
            {
                j--;
            }
            str[i] = str[j];

            while(i < j && key >= str[i])
            {
                i++;
            }
            str[j] = str[i];
        }
        str[i] = key;
        QuickSort(str,begin,i-1);
        QuickSort(str,i+1,end);
    }
}