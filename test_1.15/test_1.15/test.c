#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = (2 + 3, 3, 4, 5, 6 + 1);
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	void print_star();
//	void print_message();
//	print_star();
//	print_message();
//	print_star();
//	return 0;
//}
//void print_star()
//{
//	printf("******************\n");
//}
//void print_message()
//{
//	printf("How do you do!\n");
//}

//
//int main()
//{
//	int max(int x, int y);
//	int a, b, c;
//	printf("please enter two integer number:");
//	scanf("%d,%d", &a, &b);
//	c = max(a, b);
//	printf("max is %d\n", c);
//	return 0;
//}
//int max(int x, int y)
//{
//	int z;
//	z = x > y ? x : y;
//	return (z);
//}

//int main()
//{
//	int max(float x, float y);
//	float a, b;
//	int c;
//	scanf("%f,%f", &a, &b);
//	c = max(a, b);
//	printf("max is %d\n", c);
//	return 0;
//}
//int max(float x, float y)
//{
//	float z;
//	z = x > y ? x : y;
//	return z;
//}

//
//int main()
//{
//	float add(float x, float y);
//	float a, b, c;
//	printf("please enter a and b:");
//	scanf("%f,%f", &a, &b);
//	c = add(a, b);
//	printf("sum is %f\n", c);
//	return 0;
//}
//float add(float x, float y)
//{
//	float z;
//	z = x + y;
//	return (z);
//}


//int main()
//{
//	int max4(int a, int b, int c, int d);
//	int a, b, c, d, max; 
//	printf("Please enter 4 interger number:");
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	max = max4(a, b, c, d);
//	printf("max=%d\n", max);
//	return 0;
//}
//
//int max4(int a, int b, int c, int d)
//{
//	int max2(int a, int b);
//	int m;
//	m = max2(a,b);
//	m = max2(m, c);
//	m = max2(m, d);
//	return (m);
//}
//int max2(int a, int b)
//{
//	if (a >= b)
//		return a;
//	else
//		return b;
//}


//
//int main()
//{
//	int ret = printf("Hello world!");
//	printf("\n");
//	printf("%d\n", ret);
//	return 0;
//}



//
//int main()
//{
//	char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	int i = 0;
//	//计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i<sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//
//void test()
//{
//	static int i = 0;//static修饰局部变量
//	i++;
//	printf("%d", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//
//int main()
//{
//	int num = 0;
//	
//	for (num = 1; num <= 100; num++)
//	{
//		if (num % 2 == 1)
//			printf("%d\n", num);
//	}
//

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		
//		ret *= i;
//		sum=sum+ret;
//	}
//	printf("%d\n", sum);
//}


