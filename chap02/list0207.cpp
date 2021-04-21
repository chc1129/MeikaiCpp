// 読み込んだ整数値の桁数 (ゼロ/1桁/2桁以上) を判定

#include <iostream>

using namespace std;

int main()
{
  int n;

  cout << "整数値: ";
  cin >> n;

  if (n == 0)                       // ゼロ
    cout << "その値はゼロです.\n";
  else if ( n >= -9 && n <= 9)      // 1桁
    cout << "その値は1桁です.\n";
  else                              // 2桁以上
    cout << "その値は2桁です.\n";
}
