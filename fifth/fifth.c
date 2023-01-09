#include<stdio.h>
/////////////// 関数（自作）//////////////
////// 絶対値を外す関数//

/////// 入力された2つの整数値の絶対値の和を求める ///////

// int abs (int); //プロトタイプ宣言
// int main (void) {
//   int n ,m, result;
//   scanf("%d", &n);
//   scanf("%d", &m);
//   result = abs(n) + abs(m);
//   printf("|%d| + |%d| = %d\n", n, m, result);
//   return 0;
// }
// int abs (int x) {
//   int result;
//   if (x > 0) {
//     result = x;
//   } else {
//     result = -x;
//   }
//   return result;
// }


//////////// nのm乗を計算する関数 ////////////
int power(int, int);
int main(void) {
  int a, b;
  printf("a=");scanf("%d", &a);
  printf("b=");scanf("%d", &b);
  printf("%d ** %d + %d ** %d = %d\n", a, b, b, a, power(a,b) + power(b,a));
}
int power(int n, int m) {
  int result = 1;
  while(m > 0) {
    result = result * n;
    m--;
  }
  return result;
}