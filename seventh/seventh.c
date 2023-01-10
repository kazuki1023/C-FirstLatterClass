//////////////// ニュートン法 //////////////////
#include<stdio.h>
#include<math.h>
// double f(double x) {
//   return x*x -60;
// }
// double df(double x) {
//   return 2*x;
// }
// double nextX(double x) {
//   return x - f(x) / df(x);
// }
// int main(void) {
//   double x0 = 10;
//   double x1 = nextX(x0);
//   double(eps) = 0.000000000001; //求める精度
//   while(fabs(x0 - x1) > eps) { // fabsはdouble型の絶対値を求める関数
//     x0 = x1;
//     x1 = nextX(x1);
//     printf("%f. 14f\n", x1);
//   }
//   printf("%f. 14f (real value) \n", sqrt(60.0));
//   return 0;
// }

///////// 引数2つの場合 ///////////////
// 整数mとnを受け取り,mをで割った商とあまりを指定された場所に格納する関数warizanを作成する
void warizan(int, int, int*, int*)
int main(void) {
  int i = 29;
  int j = 4;
  int q, r;
  warizan(i, j, &q, &r);
  printf("%d = %d * %d + %d\n", i, j, q, r);
}
void warizan(int m,int n, int *quot, int *rem) {
  
}