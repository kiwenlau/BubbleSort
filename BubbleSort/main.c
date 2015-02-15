//
//  main.c
//  BubbleSort
//
//  Created by LIU Kai on 15/2/14.
//  Copyright (c) 2015年 LIU Kai. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//冒泡排序
void bubble_sort(int *array, int N)
{
    int i, j, temp;
    for (i=1; i<N; i++)
    {
        for (j=0; j<N-i; j++)
        {
            if (array[j]>array[j+1])
            {
                temp=array[j];   //交换
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

int main(int argc, const char * argv[])
{
    int *array, i, N=20;
    array=(int*)malloc(N);
    
    //随机生成数组
    srand((short)time(NULL));
    for (i=0; i<N; i++)
    {
        array[i]=rand()%100;
    }
    
    //输出原始数组
    printf("Original array:\n");
    for (i=0; i<N; i++)
    {
        printf("%2d  ", array[i]);
    }
    printf("\n\n");
    
    //调用冒泡排序
    bubble_sort(array, N);
    
    //输出排序好的数组
    printf("Sorted array:\n");
    for (i=0; i<N; i++)
    {
        printf("%2d  ", array[i]);
    }
    printf("\n\n");
    
    return 0;
}
