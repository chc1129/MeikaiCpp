// 整数型で表現できる値を表示

#include <climits>
#include <iostream>

using namespace std;

int main()
{
  cout << "この処理系の整数型で表現できる.\n";

  cout << "char          :" << CHAR_MIN << "～" << CHAR_MAX  << '\n';
  cout << "signed char   :" << CHAR_MIN << "～" << CHAR_MAX  << '\n';
  cout << "unsigned char :" << 0        << "～" << UCHAR_MAX << '\n';

