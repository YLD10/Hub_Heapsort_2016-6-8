#include <stdio.h>
#include <stdlib.h>
#include "heapsort2.h"

//Bug 预防
void Error (int **a, int N) {
    if (N > 0)
        *a = (int *)malloc(sizeof(int) * N);
    else {
        puts("\nError!");
        exit(0);
    }
}

//交换数组元素地址
void exch(int *p, int *q) {
    int tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;
}

//打印数组
void PrintArr(int a[], int n, int flag) {
    int i;
    if (flag) puts("\nFix finish:");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
    putchar('\n');
}

//最小堆排序修复
void FixDown_min(int a[], int n, int k) {
    int i, j, tmp;
    i = k;
    tmp = a[i];
    j = 2 * i + 1;
    while (j < n) {
        if (j + 1 < n && a[j + 1] < a[j]) j++;
        if (a[j] > tmp) break;
        else {
            a[i] = a[j];
            i = j;
            j = 2 * i + 1;
        }
    }
    a[i] = tmp;
    PrintArr(a, n, 1);
}

//最小堆内部结点排序
void Heapify(int a[], int n) {
    int i;
    puts("******************************");
    puts("\n>>>Heapify start...");
    for (i = (n - 2) / 2; i >= 0; i--)
        FixDown_min(a, n, i);
}

//最小堆排序
void HeapSort(int a[], int n) {
    int i;
    Heapify(a, n);
    puts("******************************");
    puts("\n>>>After heapify, start sorting...");
    for (i = 0; i < n - 1; i++) {
        exch(&a[0], &a[n - i - 1]);
        FixDown_min(a, n - i - 1, 0);
    }
}
