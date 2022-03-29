#include<stdio.h>
#include "head.h"     
int  main(void)
{
	int x=0,y=0;
       printf("请输入两个数字a，b：\n");
       scanf("%d %d",&x,&y);
       printf("sum=%d\n",add(x,y));
       printf("sub=%d\n",sub(x,y));
       printf("successed!");
       return 0;       
}
