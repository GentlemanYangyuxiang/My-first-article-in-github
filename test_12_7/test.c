#include<stdio.h>

///*#define MAX(X,Y) (X>Y?X:Y*/)//宏的定义

//int ADD(int x,int y)//引用函数ADD
//{
//	int z = 0;
//	z = x + y;
//	return z;
/*}*///引用函数，函数内的内容需要加上花括号

/*#define MAX 100*///#define标识符常量

/*int global = 20;*///定义全局变量

/*enum SEX
{
	FEMAL,
	MALE,
	SECRET
};*///枚举定义，“；”必须加在花括号后

/*static int i = 10;*///全局变量被static修饰时，这个全局变量只能在该源文件使用，若在其他源文件使用，则编译时会出现连接错误，static修饰函数也同理

//void test()
//{
//	static int i = 0;//静态局部变量，打印后保持i原来的值
//	i++;
//	printf("%d\n", i);
//}

//struct STU
//{
//	int score;
//	char name[3];
//	char SEX[7];
//};//定义结构体变量


//struct Book//定义结构体函数和结构体变量
//{
//	char name[20];//输入结构体变量的内容
//	short price;
//};

int main()
{
	//struct STU student1 = { 95, "Li", "FEMALE" };//对结构体变量输入内容
	//printf("分数:%d\n", student1.score);
	//printf("名字:%s\n", student1.name);
	//printf("性别:%s\n", student1.SEX);//打印结构体变量的内容
	//struct STU *pb = &student1;//利用指针变量指向结构体变量的地址
	//printf("score=%d name=%s SEX=%s\n", pb->score, pb->name, pb->SEX);//打印指针变量内的内容

	//struct Book b1 = { "C语言设计", 55 };//对结构体变量输入内容
	//printf("书名:%s\n",b1.name);
	//printf("价格:%d元\n", b1.price);//打印出结构体变量的内容

	//int a = 30;//定义一个变量
	//int *num;//定义一个指针
	//num = &a;//将变量的地址给指针变量
	//printf("%d\n", *num);//打印指针变量赋值后的值

	//int a = 30, b = 40;
	//int max = MAX(a, b);//调用宏
	//printf("max=%d\n", max);//由此可知，我们使用宏的方法要比使用函数的方法更加简洁

	/*printf("%d\n", i);*/
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	test();//引用含有静态局部变量的函数
	//}//打印结果是1~10
	//int i = 0;
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, };//定义数组
	//for (i = 0; i < 10;i++)//利用for循环分别打印数组内的元素
	//{
	//	printf("%d", arr[i]);//打印数组元素
	//}
	//printf("\n");//独自打印换行
	
	//int arr[2] = { 1, 2 };//定义数组
	//printf("%d\n", arr[0]);//注意每个数组的下标都是原值的基础上减1的
	//int num1 = 0, num2 = 0;
	//int sum = 0;
	//printf("输入两个数：");
	//scanf_s("%d%d", &num1, &num2);
	//sum = num1 + num2;
	//printf("sum=%d\n", sum);

	//printf("我要加入腾讯\n");
	//int c = 0;
	//while (c <= 100)//循环while语句
	//{
	//	c++;
	//	printf("我要努力敲代码\n");
	//}//两个语句在其中一个语句应该加上花括号
	//if (c > 100)
	//	printf("拿到好offer\n");

	//int coding = 0;
	//printf("你会去敲代码吗？（选择0or1）:");
	//scanf_s("%d", &coding);//使用输出函数scanf，&表示该变量的地址
	//if (coding == 1)//if语句表示选择结构
	//	printf("拿到好offer\n");//选择语句1
	//else
	//	printf("回家卖红薯\n");//选择语句2
	
 

	//int a = 20, b = 30;
	//ADD(a, b);//引用函数，将a，b分别赋给函数内的x，y
	//printf("sum=%d\n", ADD(a, b));//运用引用操作符打印函数内的内容

	//char arr1[] = "bit";//可用花括号表示字符串，也可以使用双引号表示字符串
	//char arr2[] = { 'b', 'i', 't' };//若打印出arr2，则系统无法识别字符串从哪里停止打印，最后会打印一串乱码
	//char arr3[] = { 'b', 'i', 't', '\0'};//加上\0则可以表示字符串在此停止打印，但不列入打印字符串中
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//printf("%s\n", arr3);//打印字符串

	/*printf("%d\n", MAX);*///打印MAX的值被固定为100

	//const float pai = 3.14f;//此时pai已获得常变量的属性
	//pai = 4.13;//不能直接修改变量的值
	//printf("%f\n", pai);//打印常变量pai；

	//int world = 10;
	//int global = 100;//定义局部变量
	//printf("%d\n", global);//打印global,最后打印局部变量的global

/*	printf("%d\n", FEMAL);
	printf("%d\n", MALE);
	printf("%d\n", SECRET);*///打印枚举常量，枚举变量打印值从0,1,2开始打印的

	//int a = 10, b = 20;
	//int sum = 0;//定义常量
	//sum = a + b;//常数求和
	//printf("sum=%d\n", sum);//输出指令

	//printf("Hello  World\n");//初识C语言

/*	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(long double));*///各种数据类型占电脑字节的个数

		return 0;
}