/*

  求两个整数之间的较大者

*/

#include<stdio.h>

int main()

{
	int azlel(int x,int y);

	//对被调用的函数azlel声明

	/*因为在主函数中要调用azlel函数，而azlel函数的定义却在main函数之后，
	  程序是自上而下进行的，编译系统无法知道azlel是什么，
	  所以就要在调用azlel函数之前用“int azlel(int x,int y);”对azlel函数声明*/

	int a,b,c;

	scanf("%d,%d", &a,&b );

	//scanf是输入函数

	/*括号内包括两部分。
	  一是双撇号中的内容是指定输入的数据是按什么格式输入。%d的含义是“十进制整数形式”。
	  二是输入的数据准备赋给哪个变量，seanf函数中指定的是a（b），a（b）前面的&在C语言中是地址符，表示“变量a（b）的地址”。
	  执行scanf函数，从键盘读入两个整数，送到变量a（b）的地址处，然后分别赋给变量a（b）。*/

	c=azlel( a,b );

	/*用azlel（ a，b ）调用azlel函数。调用时将a和b作为azlel函数的参数（实际参数）的值分别传送给azlel函数中的参数x和y（形式参数），
	  然后执行azlel函数体，使azlel函数中的变量，得到一个值*/

	printf("azlel=%d\n",c);

	//执行printf函数，将azlel=原样输出，%d由变量c的值取代之，\n执行换行

	return 0;

}
    //主函数体结束


    //执行azlel函数体，求两个整数中的较大者

int azlel(int x,int y)

    //定义azlel函数，函数值为整形，形式参数x和y为整形

{
	int z;

	//定义本函数中用到的变量z为整形

	if(x>y)z=x;

	//如果x>y成立，将x的值赋给变量z

	else z=y;

	//否则将y的值赋给变量z

	return(z);

	//把z的值作为azlel函数值带回到“c=azlel（a，b）；”的右侧取代azlel（a，b），然后值赋给变量c

}