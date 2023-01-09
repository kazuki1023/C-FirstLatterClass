#include<stdio.h>
////////////// 1~10までの和 ///////////////

// int main(void) {
//   int n, result;
//   result = 0;
//   n = 1;
// while (n <= 10) {
//   result = result + n;
//   n = n + 1;
// }

// printf("1からの和 = %d\n", result);

// }

/////////////1から正整数nまでの和が1000を超えるのはnがいくつのときか？？ //////
// 自作
// int main(void) {
//   int n, result;
//   n = 1;
//   result = 0;
//   while(result<1000) {
//     result = result + n; //1-44までの和は1000以下だから45が代入されて
//     n = n+ 1; //nに46が代入されて終わる
//   }
//   if(result>1000) {
//     printf("%d\n", n); //だからここで46が出てくる
//   }
// };

// 解答
// int main(void) {
//   int sum = 0;
//   int n = 0;
//   while(1) {
//     n = n + 1;
//     sum = sum + n;
//     if(sum > 1000) {
//       break;
//     }
//   }
//   printf("1+2+...+%dで1000を超える\n", n);
//   return 0;
// };


//////////////入力された整数が素数かどうか判定する ////////
// 解答 1000までの素数すべて求める
// int main(void) {
//   int n = 2,i;
//   while(n <= 1000) {
//     i = 2;
//     while(i * i <= n) {
//       if(n%i == 0){
//         break;
//       }
//       i = i + 1;
//     }
//     if(i * i> n){
//       printf("%d", n);
//       n = n + 1;
//     }
//   }
// }

///////// コラッツ予想 /////////
int main(void) {
  int n;
  printf("n =");
  scanf("%d" ,&n);
  while(n > 1){
    printf("%d →", n);
    if(n % 2 ==0) {
      n = n / 2;
    } else {
      n = 3*n+1;
    }
    printf("1\n");
    return 0;

  }


}
