/**
    Compare the triplets - Hackerrank
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void get_scores(int *a, int *b) {
    int a_score = 0, b_score = 0;
    if (sizeof(a) != sizeof(b))
        return ;

    int n = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i <= n; i++) {
        if (a[i] > b[i])
            a_score += 1;
        else if (a[i] < b[i])
            b_score += 1;
    }
    printf("%d %d", a_score, b_score);
}

int main() {
    int a0;
    int a1;
    int a2;
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0;
    int b1;
    int b2;
    scanf("%d %d %d",&b0,&b1,&b2);
    int a[] = {a0, a1, a2};
    int b[] = {b0, b1, b2};
    get_scores(a, b);
    return 0;
}
