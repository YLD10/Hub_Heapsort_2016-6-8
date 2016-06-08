#include <stdio.h>
#include <stdlib.h>
#include "heapsort2.h"

int main() {
    int N, *a, i;
    printf("\nPlease input the number of elements:");
    scanf("%d", &N);
    Error(&a, N);
    printf("\nPlease input elements:");
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    HeapSort(a, N);
    puts("******************************");
    puts("\n>>>Sorting results:\n");
    PrintArr(a, N, 0);
    return 0;
}
