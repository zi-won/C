#include <stdio.h>
int main(void) {
  long long int f[90] = {0};
  int i, n;
  scanf("%d", &n);
  f[0] = 0, f[1] = 1;
  for (i = 2; i <= n; i++) {
    f[i] = f[i - 1] + f[i - 2];
  }
  printf("%lld\n", f[n]);
  return 0;
}
