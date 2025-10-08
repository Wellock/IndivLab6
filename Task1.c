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

	puts("Введите количество градусов");
	scanf("%f", &gr);
	printf("Синус равен %.6f", sin(gr * M_PI / 180));
}

Task2()
{
	//я 6 вариант
	puts("Введите Х");
	scanf("%f", &x);
	float b = sqrt(fabs(x));
	float a = pow(b, 4) + pow(K, 3);
	float y = pow(log(a), 3) + exp(-x);
	printf("y = %.2f", y);
	printf("\nУсловие выполнено (1-да; 0-нет) %d", (((int)a % 2 == 0 && (int)b % 2 != 0) || ((int)a % 2 != 0 && (int)b % 2 == 0)) && (int)a % 3 == 0 && (int)b % 3 == 0 && (int)y % 3 == 0);
	printf("\nA = %d\nB = %d\nC = %d", (int)a, (int)b, (int)y);
}

Task1Lab6()
{
	int years;
	puts("Введите год");
	scanf("%i", &years);
	if ((years % 4 == 0 && years%100!=0)|| years % 400 == 0) printf("Год %i високосный", years);
	else printf("Год %i не високосный", years);
}

Task2Lab6()
{
	//я 2 вариант
	
	//При 2 будет 1
	//При 1 будет -0,2
	//При 3 будет 9
	//При 4 будет 5
	float x;
	puts("Введите Х");
	scanf("%f", &x);
	printf("Результат равен %.2f", x < 3 ? x / (pow(x, 3) - 6) : -pow(x, 2) + 3 * x + 9);
}

Task3Lab6()
{
	//я 19 вариант
	int kop;
	puts("Введите число копеек(от 1 до 99)");
	scanf("%i", &kop);
	if (kop % 10 == 1 && kop != 11) printf("%i копейка", kop);
	if (kop ==11 || kop == 12 || kop == 13 || kop == 14) printf("%i копеек", kop);
	if (kop % 10 == 2 || kop % 10 == 3 || kop % 10 == 4) printf("%i копейки", kop);
	if (kop % 10 == 5 || kop % 10 == 6 || kop % 10 == 7 || kop % 10 == 8 || kop % 10 == 9 || kop % 10 == 0) printf("%i копеек", kop);
	if (kop > 99 || kop < 1) printf("Данное число вне заданного диапазона");


}
