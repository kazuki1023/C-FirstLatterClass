#include <stdio.h>
// int main (void) {
//   int n, result;
//   n = 11;
//   result = n * 3;
//   printf("n = %d, 結果 = %d\n", n, result);
//   return 0;
// }

//////////奇数・偶数判定 //////////////

// int main (void) {
//   int n;
//   int rem;
//   scanf("%d", &n);
//   rem = n % 2;
//   if (rem == 0) {
//     printf("偶数\n");
//   } else {
//     printf("奇数\n");
//   }
// }

////////// 実数解or虚数解 ///////////

int main (void) {
  int a, b, c;
  int f ;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);

  f = b*b;
  if(f-4*a*c>=0) {
    printf("実数解を持つ");
  } else {
    printf("虚数会をもつ");
  }

}