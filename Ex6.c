#include <stdio.h>

int main() {
  int n;
  int A[100];
  int i;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &A[i]);
        if (A[i] == i) {
      printf("A[%d] = %d\n", i, A[i]);
    }
  }


  return 0;
}
