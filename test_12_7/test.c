#include<stdio.h>

///*#define MAX(X,Y) (X>Y?X:Y*/)//��Ķ���

//int ADD(int x,int y)//���ú���ADD
//{
//	int z = 0;
//	z = x + y;
//	return z;
/*}*///���ú����������ڵ�������Ҫ���ϻ�����

/*#define MAX 100*///#define��ʶ������

/*int global = 20;*///����ȫ�ֱ���

/*enum SEX
{
	FEMAL,
	MALE,
	SECRET
};*///ö�ٶ��壬������������ڻ����ź�

/*static int i = 10;*///ȫ�ֱ�����static����ʱ�����ȫ�ֱ���ֻ���ڸ�Դ�ļ�ʹ�ã���������Դ�ļ�ʹ�ã������ʱ��������Ӵ���static���κ���Ҳͬ��

//void test()
//{
//	static int i = 0;//��̬�ֲ���������ӡ�󱣳�iԭ����ֵ
//	i++;
//	printf("%d\n", i);
//}

//struct STU
//{
//	int score;
//	char name[3];
//	char SEX[7];
//};//����ṹ�����


//struct Book//����ṹ�庯���ͽṹ�����
//{
//	char name[20];//����ṹ�����������
//	short price;
//};

int main()
{
	//struct STU student1 = { 95, "Li", "FEMALE" };//�Խṹ�������������
	//printf("����:%d\n", student1.score);
	//printf("����:%s\n", student1.name);
	//printf("�Ա�:%s\n", student1.SEX);//��ӡ�ṹ�����������
	//struct STU *pb = &student1;//����ָ�����ָ��ṹ������ĵ�ַ
	//printf("score=%d name=%s SEX=%s\n", pb->score, pb->name, pb->SEX);//��ӡָ������ڵ�����

	//struct Book b1 = { "C�������", 55 };//�Խṹ�������������
	//printf("����:%s\n",b1.name);
	//printf("�۸�:%dԪ\n", b1.price);//��ӡ���ṹ�����������

	//int a = 30;//����һ������
	//int *num;//����һ��ָ��
	//num = &a;//�������ĵ�ַ��ָ�����
	//printf("%d\n", *num);//��ӡָ�������ֵ���ֵ

	//int a = 30, b = 40;
	//int max = MAX(a, b);//���ú�
	//printf("max=%d\n", max);//�ɴ˿�֪������ʹ�ú�ķ���Ҫ��ʹ�ú����ķ������Ӽ��

	/*printf("%d\n", i);*/
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	test();//���ú��о�̬�ֲ������ĺ���
	//}//��ӡ�����1~10
	//int i = 0;
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, };//��������
	//for (i = 0; i < 10;i++)//����forѭ���ֱ��ӡ�����ڵ�Ԫ��
	//{
	//	printf("%d", arr[i]);//��ӡ����Ԫ��
	//}
	//printf("\n");//���Դ�ӡ����
	
	//int arr[2] = { 1, 2 };//��������
	//printf("%d\n", arr[0]);//ע��ÿ��������±궼��ԭֵ�Ļ����ϼ�1��
	//int num1 = 0, num2 = 0;
	//int sum = 0;
	//printf("������������");
	//scanf_s("%d%d", &num1, &num2);
	//sum = num1 + num2;
	//printf("sum=%d\n", sum);

	//printf("��Ҫ������Ѷ\n");
	//int c = 0;
	//while (c <= 100)//ѭ��while���
	//{
	//	c++;
	//	printf("��ҪŬ���ô���\n");
	//}//�������������һ�����Ӧ�ü��ϻ�����
	//if (c > 100)
	//	printf("�õ���offer\n");

	//int coding = 0;
	//printf("���ȥ�ô����𣿣�ѡ��0or1��:");
	//scanf_s("%d", &coding);//ʹ���������scanf��&��ʾ�ñ����ĵ�ַ
	//if (coding == 1)//if����ʾѡ��ṹ
	//	printf("�õ���offer\n");//ѡ�����1
	//else
	//	printf("�ؼ�������\n");//ѡ�����2
	
 

	//int a = 20, b = 30;
	//ADD(a, b);//���ú�������a��b�ֱ𸳸������ڵ�x��y
	//printf("sum=%d\n", ADD(a, b));//�������ò�������ӡ�����ڵ�����

	//char arr1[] = "bit";//���û����ű�ʾ�ַ�����Ҳ����ʹ��˫���ű�ʾ�ַ���
	//char arr2[] = { 'b', 'i', 't' };//����ӡ��arr2����ϵͳ�޷�ʶ���ַ���������ֹͣ��ӡ�������ӡһ������
	//char arr3[] = { 'b', 'i', 't', '\0'};//����\0����Ա�ʾ�ַ����ڴ�ֹͣ��ӡ�����������ӡ�ַ�����
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//printf("%s\n", arr3);//��ӡ�ַ���

	/*printf("%d\n", MAX);*///��ӡMAX��ֵ���̶�Ϊ100

	//const float pai = 3.14f;//��ʱpai�ѻ�ó�����������
	//pai = 4.13;//����ֱ���޸ı�����ֵ
	//printf("%f\n", pai);//��ӡ������pai��

	//int world = 10;
	//int global = 100;//����ֲ�����
	//printf("%d\n", global);//��ӡglobal,����ӡ�ֲ�������global

/*	printf("%d\n", FEMAL);
	printf("%d\n", MALE);
	printf("%d\n", SECRET);*///��ӡö�ٳ�����ö�ٱ�����ӡֵ��0,1,2��ʼ��ӡ��

	//int a = 10, b = 20;
	//int sum = 0;//���峣��
	//sum = a + b;//�������
	//printf("sum=%d\n", sum);//���ָ��

	//printf("Hello  World\n");//��ʶC����

/*	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(long double));*///������������ռ�����ֽڵĸ���

		return 0;
}