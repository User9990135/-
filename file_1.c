#include <stdio.h>
#include <math.h>
int main(void)
{
	double a, b, c, dis;

	printf("계수 a b c 차례대로 입력하시오:");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a == 0)
		printf("%.2f", -c / b);
	else
	{
		dis = b * b - 4.0 * a * c;
		if (dis >= 0) {

			printf("방정식근은 %.2f\n", (-b + sqrt(dis)) / (2.0 * a));
			printf("방정식근은 %.2f\n", (-b - sqrt(dis)) / (2.0 * a));

		}
		else
			printf("실근이 존재하지 않습니다\n");
	}
	return 0;

}
