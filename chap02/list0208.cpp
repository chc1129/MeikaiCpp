// 読み込んだ整数値の桁数 (2桁以上かどうか) を判定

#include <iostream>

using namespace std;

int main()
{
  int n;

  cout << "整数値: ";
  cin >> n;

  if (n <= -10 || n >= 10)            // 2桁以上
    cout << "その値は2桁以上です.\n";
  else                                // 2桁未満
    cout << "その値は2桁未満です.\n";
}
