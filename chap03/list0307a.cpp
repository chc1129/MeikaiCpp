// 読み込だ個数だけ+と-を交互に表示する

#include <iostream>

using namespace std;

int main()
{
  int n;
  cout << "何個表示しますか: ";
  cin >> n;

  if (n > 0) {
    int i = 1;
    while (i <= n) {
      if (i % 2)
        cout << '+'; // 奇数
      else
        cout << '-'; // 偶数
      i++;
    }
    cout << '\n';
  }
}
