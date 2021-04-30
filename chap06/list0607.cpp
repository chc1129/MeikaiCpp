//--- xのn乗を返す ---//
double power(double x, int n)
{
  double tmp = 1.0;

  while (n-- > 0)
    tmp *= x; // tmpにxを掛ける
  return tmp;
}
