#include <stdio.h>
void imprime_soma(int x, int y) {
  printf("%d + %d = %d\n", x, y, x+y);
}
int main() {
  imprime_soma(5, 7);
  imprime_soma(8, 9);
  imprime_soma(2, 3);
  return 0;
}