#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<math.h>
main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	double ceshi = 0;
	double X1 = 0;
	double X2 = 0;
	printf("请输入二元一次方程组的三个变量：a，b，c。（aX方+bY+c=0）\n\n");
	printf("(输入规则：a空格b空格c，然后回车)\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("您输入的：a=%lf\tb=%lf\tc=%lf\t\n\n",a,b,c);
	ceshi = b * b - 4 * a * c;
	if (ceshi < 0)
	{
		printf("该二次函数没有解QAQ!");
		
    }
	else 
	{
		X1 = (-b + sqrt(ceshi)) / 2 * a;
		X2 = (-b - sqrt(ceshi)) / 2 * a;
		printf("X1=%lf\n\n", X1);
		printf("X2=%lf\n", X2);
	}

	return 0;

}