#include <stdio.h>
#include <math.h>

// 点の座標を表す構造体
struct Point
{
  int x;
  int y;
};

int main()
{

  // 点の入力部
  struct Point points[10];
  int n;
  int i = 0;
  int max_distance_x;
  int max_distance_y;
  printf("Number of points: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    printf("Point %d x: ", i);
    scanf("%d", &points[i].x);
    printf("Point %d y: ", i);
    scanf("%d", &points[i].y);
  }

  // 距離を測定する変数
  double max_distance = 0;

  // 距離を計算して最も遠い点を見つける
  // for (int i = 0; i < n; i++)
  // {
  //   // 点の原点からの距離を計算
  //   double distance = sqrt(points[i].x * points[i].x + points[i].y * points[i].y);
  //   if (distance > max_distance)
  //   {
  //     max_distance = distance;
  //     int max_distance_x = points[i].x;
  //     printf("xの値は(%d)\n", max_distance_x);
  //     int max_distance_y = points[i].y;
  //     printf("yの値は(%d)\n", max_distance_y);
  //   }

  //   // 最大値を与える、x,yを代入

  //     printf("xの値は(%d)\n", points[i].x);
  //     printf("yの値は(%d)\n", points[i].y);

  //     // この変数に代入できてない
  //     printf("xの値は(%d)\n", max_distance_x);
  //     printf("yの値は(%d)\n", max_distance_y);
  // }

  while(i < n)
  {
    double distance = sqrt(points[i].x * points[i].x + points[i].y * points[i].y);

    if (distance > max_distance)
    {
      max_distance = distance;
      const int max_distance_x = points[i].x;
      printf("xの値は(%d)\n", max_distance_x);
      int max_distance_y = points[i].y;
      printf("yの値は(%d)\n", max_distance_y);
    }

    printf("xの値は(%d)\n", max_distance_x);
    printf("yの値は(%d)\n", max_distance_y);
    i ++;
  }

  int max_distance_integer = floor(max_distance);

  printf("最大値のときのxの値は(%d)\n", max_distance_x);
  printf("最大値のときのyの値は(%d)\n", max_distance_y);
  // 最も遠い点を出力
  printf("max_distance_integerの中身は(%d)\n", max_distance_integer);
  // printf("The most distant point is (%d, %d)", max_distance_x, max_distance_y);

  return 0;
}
