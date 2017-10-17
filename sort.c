#include <string.h>

void QuickSort(int *str,int begin,int end)//快速排序　nlog2(n) 升序
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

void BubbleSort(int arr[], int n)//冒泡排序　n*n 升序
{
    int temp;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void InsertSort(int arr[],int n) //插入排序 n*n 升序
{
    int i, j;
    int temp;
    for (i = 1; i < n; i++) 
    {
        temp = arr[i]; //将其插入有序段arr[0~i-1]
        for (j = i - 1;j >= 0 && arr[j] > temp;j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = temp;
    }
}