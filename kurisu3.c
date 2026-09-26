#include<stdio.h>

int main()
{
  //用上if的嵌套！
  int score = -1;
  printf("请输入分数！\n");
  scanf("%d",&score);

  if(score >= 0 && score <= 100)
  {
  //正常数据
    if(score >= 1 && score <= 60)
    {
      printf("不及格！\n");
    }
    else if(score > 60 && score <= 80)
    {
      printf("菜！\n");
    }
    else
    {
      printf("还行吧。。。\n");
    }
  }
  //异常数据
  else
  {
    printf("？你输入的是啥？\n");
  }


  return 0;
}
