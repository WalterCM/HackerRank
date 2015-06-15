/*
 * =====================================================================================
 *
 *       Filename:  quicksort.c
 *
 *    Description:  Program that solves the third Hacker Rank quicksort problem.
 *
 *        Version:  1.0
 *        Created:  14/06/15 18:37:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Walter Capa (WalterCM), walterc316@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int split(int n, int ar[], int lo, int hi)
{
    int p = ar[hi];
    int i = lo, j = lo;
    for (; j <= hi; j++) {
        if (ar[j] <= p) {
            if (ar[i] != ar[j]) {
                ar[i] ^= ar[j];
                ar[j] ^= ar[i];
                ar[i] ^= ar[j];
            }
            i++;
        }
    }
     
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");

    return i - 1;
}

void quicksort(int n, int ar[n], int lo, int hi)
{
    if (lo >= hi) return;
    
    int middle = split(n, ar, lo, hi);
    quicksort(n, ar, lo, middle - 1);
    quicksort(n, ar, middle + 1, hi);
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
