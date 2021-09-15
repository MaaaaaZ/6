#define _CRT_SECURE_NO_WARNINGS                                             //终止vs对scanf函数的禁用


#include<stdio.h>                                                           //调用不解释
#include<math.h>                                                            //调用数学函数库（删了似乎也行）
main()
{
	double a = 0;                                                           //定义a
	double b = 0;                                                           //定义b
	double c = 0;                                                           //定义c
	double ceshi = 0;                                                       //定义b方减4ac
	double X1 = 0;                                                          //定义x1（根）
	double X2 = 0;                                                          //定义x2（根）
	printf("请输入二元一次方程组的三个变量：a，b，c。（aX方+bY+c=0）\n\n"); //不解释，加的花
	printf("(输入规则：a空格b空格c，然后回车)\n");                          //加的提示而已
	scanf("%lf %lf %lf", &a, &b, &c);                                       //键入三个变量（abc）
	printf("您输入的：a=%lf\tb=%lf\tc=%lf\t\n\n",a,b,c);                    //加花而已
	ceshi = b * b - 4 * a * c;                                              //赋予根号下的灵魂~
	if (ceshi < 0)                                                          //if大佬开始出现-一定要记得，这里没有；分号！！！！
	{
		printf("该二次函数没有解QAQ!");                                     //QAQ！
		
    }
	else                                                                    //else大佬开始出现！
	{
		X1 = (-b + sqrt(ceshi)) / 2 * a;                                    //计算根1
		X2 = (-b - sqrt(ceshi)) / 2 * a;                                    //计算根2
		printf("X1=%lf\n\n", X1);                                           //打印根1
		printf("X2=%lf\n", X2);                                             //打印根2
	}

	return 0;                                                               //return 0

}