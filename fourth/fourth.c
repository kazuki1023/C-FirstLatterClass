#include<stdio.h>
/////////// 100までの素数出力 /////////////////

// int main(void) {
//   int i;
//   int n;
//   scanf("%d", &n);
//   for(n = 2; n <= 100; n++) {
//     for(i = 2; i * 2 < n; i++) {
//       if(n % i ==0)
//         break;
//       if(i * 2 > n)
//         printf("%dは素数\n", n);
//     }
//   }
// }

////////////// 配列について ////////////////
//////// ０が入力されるまで非負の整数を配列に読み込んでいく、０が入力されたら、すべての入力を逆順で出力

int main (void) {
  int a[100] ;
  int i, j ;
  for(i = 0; i < 100; i++ ) {
    scanf("%d", &a[i]);
    if(a[i] == 0) {
      break;
    } else {
      for(j = i-1; j >= 0; j--) {
        printf("%d\n", a[j]);
      }
    }
  };
}
