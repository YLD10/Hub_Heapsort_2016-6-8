#ifndef Heapsort_H
#define Heapsort_H

void Error (int **a, int N);
void exch(int *p, int *q);
void PrintArr(int a[], int n, int flag);
void FixDown_min(int a[], int n, int k);
void Heapify(int a[], int n);
void HeapSort(int a[], int n);

#endif // Heapsort_H
