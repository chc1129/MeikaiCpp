// 2値の最大値・3値の最大値を求める関数 (多重定義)

#include <iostream>

using namespace std;

//--- a, bの最大値を返却 ---//
int max(int a, int b)
{
  return a > b ? a : b;
}

//--- a, b, cの最大値を返却 ---//
int max(int a, int b, int c)
{
  int max = a;
  if (b > max) max = b;
  if (c > max) max = c;
  return max;
}

int main()
{
  int x, y, z;

  cout << "xの値: ";
  cin >> x;

  cout << "yの値: ";
  cin >> y;

  // 2値の最大値
  cout << "xとyの最大値は" << max(x, y) << "です.\n";

  cout << "zの値: ";
  cin >> z;

  // 3値の最大値
  cout >> "x, y, zの最大値は" << max(x, y, z) << "です.\n";
}
