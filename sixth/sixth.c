/////////////// 組み込み関数 //////////
//  整数aと整数bに対して( √a + b の整数部) + (log b の整数部分)を計算する
#include<stdio.h>
#include<math.h>
int submain(int, int);
int main(void) {
  int a = 10;
  int b = 20;
  int result ;
  result = (int)sqrt(a + b) + (int)log10(b) + (int)submain(a, b);
  printf("%d\n", result);
}
int submain(int a, int b) { //aがbで連続して割り切れる回数
  int subresult = 0;
  while(a % b == 0) {
    a = a/b;
    subresult++;
  }
  return subresult;

}
