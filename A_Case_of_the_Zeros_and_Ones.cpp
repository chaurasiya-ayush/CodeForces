#include <cstdio>
 
int main() {
  int N;
  scanf("%d\n", &N);
  int res = 0;
  for (int i = 0; i < N; ++i) {
    char c;
    scanf("%c", &c);
    if (c == '0') res += 1; else res -= 1;
  }
  printf("%d\n", res < 0 ? -res : res);
  return 0;
}