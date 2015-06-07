/*
 * =====================================================================================
 *
 *       Filename:  utopian-tree.c
 *
 *    Description:  Program that solves the Utopian Tree Hacker Rank problem 
 *
 *        Version:  1.0
 *        Created:  06/05/2015 03:27:10 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Walter Capa (WalterCM), walterc316@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int height(int n)
{
    int h = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1)
            h += 1;
        else if (i % 2 == 0)
            h *= 2;
    }

    return h;
}
int main(void)
{
    int t = 0;
    scanf("%d", &t);
    int n = 0;
    
    while (t--) {
        scanf("%d", &n);
        printf("%d\n", height(n));
    }

    return 0;
}
