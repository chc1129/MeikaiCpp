// 整数型で表現できる値を表示

#include <limits>
#include <iostream>

using namespace std;

int main()
{
  cout << "この処理系の整数型で表現できる値\n";
  cout << "char           :"
                          << int(numeric_limits<char>::min()) << "～"
                          << int(numeric_limits<char>::max()) << '\n';
  cout << "signed char    :"
                          << int(numeric_limits<signed char>::min()) << "～"
                          << int(numeric_limits<signed char>::max()) << '\n';
  cout << "un signed char :"
                          << int(numeric_limits<unsigned char>::min()) << "～"
                          << int(numeric_limits<unsigned char>::max()) << '\n';

  cout << "short int      :"
                          << int(numeric_limits<short int>::min()) << "～"
                          << int(numeric_limits<short int>::max()) << '\n';
  cout << "int            :"
                          << int(numeric_limits<int>::min()) << "～"
                          << int(numeric_limits<int>::max()) << '\n';
  cout << "long int      :"
                          << int(numeric_limits<long int>::min()) << "～"
                          << int(numeric_limits<long int>::max()) << '\n';

  cout << "unsigned short int :"
                          << int(numeric_limits<unsigned short int>::min()) << "～"
                          << int(numeric_limits<unsigned short int>::max()) << '\n';
  cout << "unsigned int       :"
                          << int(numeric_limits<unsigned int>::min()) << "～"
                          << int(numeric_limits<unsigned int>::max()) << '\n';
  cout << "unsigned long int  :"
                          << int(numeric_limits<unsigned long int>::min()) << "～"
                          << int(numeric_limits<unsigned long int>::max()) << '\n';
}
