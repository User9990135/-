#include <stdio.h>
#include <math.h>
int main(void)
{
	double v;
	while (1) {

		printf("실수값을 입력하세요:");
		scanf("%lf", &v);

		if (v < 0.0)
			goto Out; //goto 문 

		printf("%f의 제곱근은 %f입니다.\n", v, sqrt(v));
	}
	Out:
	return 0;
}
