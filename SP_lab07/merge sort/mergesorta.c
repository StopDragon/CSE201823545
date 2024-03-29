#include "mergesort.h"

void mergesorta(int key[], int n){
    int j, k, m, *w;
    for(m = 1; m < n; m *= 2)
        ;
    if(n < m){
        printf("ERROR: Array size is not a power of 2 - Bye!\n");
        exit(1);
    }
    w = calloc(n, sizeof(int));
    assert(w != NULL);
    for(k = 1; k < n; k *= 2){
        for(j = 0; j < n - k; j += 2*k)
            merge(key + j, key + j + k, w + j, k, k);
        for(j = 0; j < n; ++j)
            key[j] = w[j];
    }
    free(w);
}