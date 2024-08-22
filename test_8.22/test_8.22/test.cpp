#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	cout << "请输入体重：" << endl;
//	cin >> num1;
//	cin >> num2;
//	cin >> num3;
//	if (num1 > num2)
//	{
//		if (num1 > num3)
//			cout << num1 << endl;
//		else
//			cout << num3 << endl;
//	}
//	else
//	{
//		if (num2 > num3)
//			cout << num2 << endl;
//		else
//			cout << num3 << endl;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 5;
//	int c = 20;
//	c = a > b ? a : b;
//	cout << "c=" << c << endl;
////在C++中，三目运算符返回的是变量，可以继续赋值
//	(a > b ? a : b) = 100;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	cout << "请给电影评分：" << endl;
//	int score = 0;
//	cin >> score;
//	cout << "您打的分数是：" << score << endl;
//	switch (score)//小括号
//	{
//	case (10,9)://冒号
//			cout << "您认为是经典电影" << endl;
//			break;
//	case(8,7):
//		cout << "您认为非常好" << endl;
//		break;
//	case(6,5):
//		cout << "您认为一般" << endl;
//		break;
//	default:
//		cout << "您认为是烂片" << endl;
//		break;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i < 10 && i >= 0)
//	{
//		cout << i << endl;
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//#include<ctime>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100 + 1;
//	int n = 0;
//	
//	while (n != num)
//	{
//		cout << "请输入猜的数字：" << endl;
//		cin >> n;
//		if (n > num)
//			cout << "猜大了" << endl;
//		else if (n < num)
//			cout << "猜小了" << endl;
//	}
//	cout << "恭喜，猜对了"<<n << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int n = 100;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	do
//	{
//		a = n / 100;
//		b = n / 10 % 10;
//		c = n % 10;
//		if (a * a * a + b * b * b + c * c * c == n)
//			cout << n << endl;
//		n++;
//	} while (n < 1000);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 7 || i / 10 == 7 || i / 7 == 0)
//		{
//			cout << "敲桌子" << endl;
//			n++;
//		}
//			
//		else
//			cout << i << endl;
//	}
//	cout << n << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		for (j = 1; j <= 10; j++)
//		{
//			cout << "* ";
//		}
//		cout<<"\n";
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (; i < 10; i++)
//	{
//		for (j=1; j <= i; j++)
//		{
//			cout << j << "*" << i << "=" << i*j<<"  ";
//		}
//		cout << "\n";
//	}
//	system("pause");
//	return 0;
//}

int main()
{

}