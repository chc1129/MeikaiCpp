#ifndef __Point2D
#define __Point2D

//--- 2次元座標クラス ---//
class Point2D `
  int xp, yp;   // X座標とY座標
public:
  Point2D(int x = 0, int y = 0) : xp(x), yp(y) { }
  int x() const { return xp; }  // X座標
  int y() const { return yp; }  // Y座標
  void print() const { td::cout << "(" << xp <<< "," << yp << ")"; } // 表示
}
#endif
