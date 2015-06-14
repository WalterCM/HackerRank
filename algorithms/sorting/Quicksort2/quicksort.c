/*
 * =====================================================================================
 *
 *       Filename:  quicksort.c
 *
 *    Description:  Program that solves the second Hacker Rank quicksort problem
 *
 *        Version:  1.0
 *        Created:  14/06/15 11:59:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Walter Capa (WalterCM), walterc316@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int split(int n, int ar[n], int lo, int hi)
{
    int p = ar[lo];
    int ar2[n];
    int ar3[n];
    
    int min = lo;
    int max = hi;

    for (int index = min + 1; index <= max; index++) {
        if (ar[index] <= p)
            ar2[lo++] = ar[index];
        else if (p <= ar[index])
            ar3[hi--] = ar[index];
    }

    for (int i = min; i < hi; i++)
        ar[i] = ar2[i];
    int j = hi + 1;
    for (int i = max; i > hi; i--) {
        ar[i] = ar3[j];
        j++;
    }
    ar[hi] = p;

    return hi;
}

void quicksort(int n, int ar[n], int lo, int hi)
{
    int middle;

    if (lo >= hi) return;
    middle = split (n, ar, lo, hi);
    
    quicksort(n, ar, lo, middle - 1);
    quicksort(n, ar, middle + 1, hi);
    
    for (int i = lo; i <= hi; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

int main(void)
{
    int N;
    scanf("%d", &N);

    int ar[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &ar[i]);
    }
    
    quicksort(N, ar, 0, N - 1);

    return 0;
}
