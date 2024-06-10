#include <stdio.h>
int main(void)
{
	char op;
	int x, y, result;
//if 문에서 switch 문으로 바뀐버전
	printf("수식을 입력하시오 ex 2 + 5 >> ");
	scanf("%d %c %d", &x, &op, &y);

	switch (op)
	{
		case '+':
			result = x + y;
			break;

		case '-':
			result = x - y;
			break;

		case '*':
			result = x * y;
			break;


		case '/':
			result = x / y;
			break;

		case '%':
			result = x % y;
			break;
	default:
		printf("지원되지 않는 연산자입니다. \n");
		break;
	}
	printf("%d %c %d = %d \n", x, op, y, result);
	return 0;

}
