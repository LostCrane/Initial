/*
			������Ϸ
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()

{
	printf("������Ϸ\n");

	int b = 0, c = 0;
	
	srand(time(0));

	int a = rand()%100 + 1;
	
	printf("--------------------------------------------------------------------\n");

	printf("���Ѿ������һ��1��100֮�����\n");

	printf("������µ���ֵ\n");

	scanf("%d", &b);

	while(a != b)
	{
		if(b>a)
		{
			printf("��µ����Ƚϴ�\n");
		}
		else 
		{
			printf("��µ����Ƚ�С\n"); 
		}

		c++;

		printf("���ڲ�һ��\n");

		scanf("%d", &b);
	}

	c++;

	printf("��ϲ�㣬�¶��ˣ���һ������%d��\n", c);

	printf("--------------------------------------------------------------------\n");

}
	