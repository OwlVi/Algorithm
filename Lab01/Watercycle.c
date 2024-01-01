#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    int p[n],b=0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    qsort(p, n, sizeof(int), compare);

    for (int i = 0,j = n-1; i <= j; j--)
    {   
        if (p[j] + p[i] <= x) {
            i++;
        }
        b++;

    }

    printf("%d", b);

    return 0;   
}
