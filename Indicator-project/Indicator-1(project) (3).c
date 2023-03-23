#include <stdio.h>

int main() {
  char str[100], *p;
  int len = 0;

  printf("Enter a string: ");
  scanf("%s", str);

  p = str;
  while (*p != '\0') {
    len++;
    p++;
  }

  printf("The length of the string is: %d\n", len);

  return 0;
}

