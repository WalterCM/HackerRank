/*
 * =====================================================================================
 *
 *       Filename:  quicksort.c
 *
 *    Description:  Program that solves that first Hacker Rank quicksort problem
 *
 *        Version:  1.0
 *        Created:  14/06/15 10:36:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Walter Capa (WalterCM), walterc316@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

void split(int n, int ar[n])
{
    int p = ar[0];
    int ar2[n];
    for (int i = 0; i < n; i++)
        ar2[i] = ar[i];

    int lo = 0, hi = n - 1;
    for (int index = 1; index < n; index++) {
        if (ar2[index] <= p)
            ar[lo++] = ar2[index];
        else if (p <= ar2[index])
            ar[hi--] = ar2[index];
    }

    ar[hi] = p;
}

int main(void) 
{
    int N;
    scanf("%d", &N);

    int ar[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &ar[i]);
    }

    split(N, ar);

    for (int i = 0; i < N; i++) {
        printf("%d ", ar[i]);
    }
}
