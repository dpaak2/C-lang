#include <stdio.h>
int Sum(int,int);
extern int result;
void main()
{
	int num1, num2;
	char op[1];
	puts("첫번째 숫자 입력: \n");
	scanf("%d", &num1);
	puts("두번째 숫자 입력: \n");
	scanf("%d", &num2);
	puts("연산자 입력: ");
	scanf("%s",op);
	Sum(num1,num2);
	printf("결과는 %d\n", result);
}


