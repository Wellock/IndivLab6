#include<stdio.h>
#include<math.h>
#include<locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define K 8.2

float gr;
float x;

Task1();
Task2();
Task1Lab6();
Task2Lab6();
Task3Lab6();



main()
{
	setlocale(LC_ALL, "RUS");
	//Task1();
	//Task2();
	//Task1Lab6();
	//Task2Lab6();
	Task3Lab6();
}

Task1()
{

	puts("������� ���������� ��������");
	scanf("%f", &gr);
	printf("����� ����� %.6f", sin(gr * M_PI / 180));
}

Task2()
{
	//� 6 �������
	puts("������� �");
	scanf("%f", &x);
	float b = sqrt(fabs(x));
	float a = pow(b, 4) + pow(K, 3);
	float y = pow(log(a), 3) + exp(-x);
	printf("y = %.2f", y);
	printf("\n������� ��������� (1-��; 0-���) %d", (((int)a % 2 == 0 && (int)b % 2 != 0) || ((int)a % 2 != 0 && (int)b % 2 == 0)) && (int)a % 3 == 0 && (int)b % 3 == 0 && (int)y % 3 == 0);
	printf("\nA = %d\nB = %d\nC = %d", (int)a, (int)b, (int)y);
}

Task1Lab6()
{
	int years;
	puts("������� ���");
	scanf("%i", &years);
	if ((years % 4 == 0 && years%100!=0)|| years % 400 == 0) printf("��� %i ����������", years);
	else printf("��� %i �� ����������", years);
}

Task2Lab6()
{
	//� 2 �������
	
	//��� 2 ����� 1
	//��� 1 ����� -0,2
	//��� 3 ����� 9
	//��� 4 ����� 5
	float x;
	puts("������� �");
	scanf("%f", &x);
	printf("��������� ����� %.2f", x < 3 ? x / (pow(x, 3) - 6) : -pow(x, 2) + 3 * x + 9);
}

Task3Lab6()
{
	//� 19 �������
	int kop;
	puts("������� ����� ������(�� 1 �� 99)");
	scanf("%i", &kop);
	if (kop % 10 == 1 && kop != 11) printf("%i �������", kop);
	if (kop ==11 || kop == 12 || kop == 13 || kop == 14) printf("%i ������", kop);
	if (kop % 10 == 2 || kop % 10 == 3 || kop % 10 == 4) printf("%i �������", kop);
	if (kop % 10 == 5 || kop % 10 == 6 || kop % 10 == 7 || kop % 10 == 8 || kop % 10 == 9 || kop % 10 == 0) printf("%i ������", kop);
	if (kop > 99 || kop < 1) printf("������ ����� ��� ��������� ���������");


}