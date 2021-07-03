/*
			猜数游戏
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()

{
	printf("猜数游戏\n");

	int b = 0, c = 0;
	
	srand(time(0));

	int a = rand()%100 + 1;
	
	printf("--------------------------------------------------------------------\n");

	printf("我已经想好了一个1到100之间的数\n");

	printf("输入你猜的数值\n");

	scanf("%d", &b);

	while(a != b)
	{
		if(b>a)
		{
			printf("你猜的数比较大\n");
		}
		else 
		{
			printf("你猜的数比较小\n"); 
		}

		c++;

		printf("请在猜一次\n");

		scanf("%d", &b);
	}

	c++;

	printf("恭喜你，猜对了，你一共猜了%d回\n", c);

	printf("--------------------------------------------------------------------\n");

}
	