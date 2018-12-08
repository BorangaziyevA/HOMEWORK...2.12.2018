#include<stdio.h>
#include<iostream>
#include<locale.h>

void task9()
{
	int x, y, z;
	printf("x = ");
	scanf_s("%d", &x);
	printf("y = ");
	scanf_s("%d", &y);
	printf("z = ");
	scanf_s("%d", &z);

	if ((x > y) && (x > z)) {
		if (x > y + z)
			printf("True\n");
		else printf("False\n");
	}
	else if ((y > x) && (y > z)) {
		if (y>x+z)
			printf("True\n");
		else printf("False\n");
	}
	else if ((z > x) && (z > y)) {
		if (z>x+y)
			printf("True\n");
		else printf("False\n");
	}
}
void task8()
{
	int x, y;
	printf("x = ");
	scanf_s("%d", &x);
	printf("y = ");
	scanf_s("%d", &y);

	if ((x%y == 0) || (y%x == 0))
		printf("True\n");
	else
		printf("False\n");
}
void task7()
{
	int x, y, z;
	printf("x = ");
	scanf_s("%d", &x);
	printf("y = ");
	scanf_s("%d", &y);
	printf("z = ");
	scanf_s("%d", &z);
	
	if (pow(z, 2) == pow(x, 2) + pow(y, 2))
		printf("True\n");
	else
		printf("False\n");
}
void task6()
{
	int  a, b, c;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	printf("c = ");
	scanf_s("%d", &c);


	if ((a > b) && (a > c))
		printf("%d\n", a);
	else if ((b > a) && (b > c))
		printf("%d\n", b);
	else if ((c > b) && (c > a))
		printf("%d\n", c);
}
void task5()
{
	int  a, b, c;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	printf("c = ");
	scanf_s("%d", &c);


	if ((a > b) && (b > c))
		printf("%d\n", c);
	else if ((a > c) && (c > b))
		printf("%d\n", b);
	else if ((b > a) && (a > c))
		printf("%d\n", c);
	else if ((b > c) && (c > a))
		printf("%d\n", a);
	else if ((c > b) && (b > a))
		printf("%d\n", a);
	else if ((c > a) && (a > b))
		printf("%d\n", b);
}
void task4()
{
	int x, y, z;
	printf("x = ");
	scanf_s("%d", &x);
	printf("y = ");
	scanf_s("%d", &y);
	printf("z = ");
	scanf_s("%d", &z);


	int m, n, k;
	n = x, m = y, k = z;
	int e = m*n / k;

	if (((x > y) && (x > z)) && (y > z))
	{
		n = x, m = y, k = z;
		printf("%d\n", e);
	}
	else if (((x > y) && (x > z)) && (z > y))
	{
		n = x, k = y, m = z;
		printf("%d\n", e);
	}
	else if (((y > x) && (y > z)) && (z > x))
	{
		n = y, m = z, k = x;
		printf("%d\n", e);
	}
	else if (((y > x) && (y > z)) && (x > z))
	{
		n = y, m = x, k = z;
		printf("%d\n", e);
	}
	else if (((z > x) && (z > y)) && (y > x))
	{
		n = z, m = y, k = x;
		printf("%d\n", e);
	}
	else if (((z > x) && (z > y)) && (x > y))
	{
		n = z, m = x, k = y;
		printf("%d\n", e);
	}

}
void task3()
{
	float x, y;
	printf("x = ");
	scanf_s("%f", &x);
	printf("y = ");
	scanf_s("%f", &y);
	float z = x / y;
	float e = y / x;
	if (x > y)
	{
		printf("%f\n", z);
	}
	else {
		printf("%f\n",e );
	}
}
void task2()
{
	int x, y;
	printf("x = ");
	scanf_s("%d", &x);
	printf("y = ");
	scanf_s("%d", &y);

	if (x > y)
	{	
		printf("%d - ", x);
		printf("%d\n", y);
	}
	else if (x < y)
	{
		printf("%d - ", y);
		printf("%d\n",x);
	}
	else printf("ERROR\n");
	
}
void task1()
{
	float x, y;
	printf("x = ");
	scanf_s("%f", &x);
	printf("y = ");
	scanf_s("%f", &y);
	float z = 0;
	float e = 12 / x;
	float t = 12 / y;
	float p = 144 / (x*y);

	if ((x == 0) && (y == 0))
		printf("%f\n", z);
	else if ((y == 0))
		printf("%f\n", e);
	else if ((x == 0))
		printf("%f\n", t);
	else printf("%f\n", p);
}
void main() 
{
	setlocale(LC_ALL, "");

	int task;
	int flag;

start:
	printf("Введите номер задания:");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1:task1(); break;
	case 2:task2(); break;
	case 3:task3(); break;
	case 4:task4(); break;
	case 5:task5(); break;
	case 6:task6(); break;
	case 7:task7(); break;
	case 8:task8(); break;
	case 9:task9(); break;
	default:
		break;
	}
	printf("Хотите продолжить?1/0\n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;

	system("pause");
}