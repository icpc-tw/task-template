#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  scanf("%d%d", &a, &b);
  int n = 1001;
  vector<int> r(n, b);
  int sum = n * a - (n - 1) * b;
  r[0] = sum;
  printf("%d\n", n);
  for (int i = 0; i < n; i++) printf("%d%c", r[i], i == n - 1 ? '\n' : ' ');
  return 0;
}
