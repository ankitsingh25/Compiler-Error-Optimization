#include <stdio.h>
#include <stdbool.h>

void doit(bool p) {
  if (p)
    puts("p is true");
  if (!p)
    puts("p is false");
}

int main(int argc, char *argv[]) {
  bool p;
  doit(p);
  return 0;
}
