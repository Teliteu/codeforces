#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;
  long long aa = 1 + ((a - 1) / c);
  long long bb = 1 + ((b - 1) / c);
  cout << aa * bb;
}