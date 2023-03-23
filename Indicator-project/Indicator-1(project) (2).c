#include <stdio.h>

int main() {
  int arr[100], n, i, *p;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter %d integers:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("You entered:\n");
  for (p = arr; p < arr + n; p++) {
    printf("%d\n", *p);
  }

  return 0;
}

