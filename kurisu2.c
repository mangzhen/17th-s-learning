#include<stdio.h>

int main()
{
  //if的第三种格式
  /*
  if()
  {
    A;
  }
  else if()
  {
    B;
  }
  else if()
  {
    C;
  }
  ...
  else
  {
    N;
  }
  N就是超级备胎
*/
  int money;
  printf("请输入余额\n");
  scanf("%d",&money);

  /*if(money == 0)
  {
    printf("？\n");
  }
  不能这么插！否则就存在两个if独立了！！！会同时输出?和大好きだよ！
  */

  if(money >= 1 && money <= 99)
  {
    printf("oi!\n");
  }
  else if(money > 99 && money < 500)
  {
    printf("。。。\n");
  }
  else if(money >= 500 && money < 1000)
  {
    printf("。。。 バカ\n");
  }
  else if(money >= 1000 && money < 2000)
  {
    printf("へん！別に君を好きよ?!\n");
  }
  else
  {
    printf("大好きだよ！\n");
  }

  return 0;
}
