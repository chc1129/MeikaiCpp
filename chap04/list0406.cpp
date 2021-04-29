// 各種の整数型と変数の大きさを表示

#include <iostream>

using namespace std;

int main()
{
  char c;
  cout << "char型の大きさ  :" << sizeof(char) << '\n';
  cout << "変数cの大きさ   :" << sizeof(c)    << '\n';

  short s;
  cout << "short型の大きさ :" << sizeof(short) << '\n';
  cout << "変数sの大きさ   :" << sizeof(s)     << '\n';

  int i;
  cout << "int型の大きさ   :" << sizeof(int) << '\n';
  cout << "変数iの大きさ   :" << sizeof(i)   << '\n';

  long l;
  cout << "long型の大きさ  :" << sizeof(long) << '\n';
  cout << "変数lの大きさ   :" << sizeof(l)    << '\n';
}
