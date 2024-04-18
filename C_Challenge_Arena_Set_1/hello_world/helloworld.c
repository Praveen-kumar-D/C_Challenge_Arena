#include <stdio.h>

char* return_str() {
  char *name = "hello world!";
  return name;
}

int main(void) {
  printf("%s", return_str());
}
