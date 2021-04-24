// 2つの変数を昇順に(大きい順)にソート

#include <iostream>

using namespace std;

int main()
{
  int a, b;

  cout << "変数a: "; cin >> a;
  cout << "変数b: "; cin >> b;

  if (a == b) {
    cout << "2つの値は同じです\n";
  } else {
    if (a < b) {      // aがbより小さければ
      int t = a;      // それらの値を交換
      a = b;
      b = a;
    }
    cout << "a > bとなるようにソートしました.\n";
    cout << "変数aは" << a << "です.\n";
    cout << "変数bは" << b << "です.\n";
  }
}
