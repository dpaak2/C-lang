#include <stdio.h>
int Sum(int,int);
extern int result;
void main()
{
	int num1, num2;
	char op[1];
	puts("ù��° ���� �Է�: \n");
	scanf("%d", &num1);
	puts("�ι�° ���� �Է�: \n");
	scanf("%d", &num2);
	puts("������ �Է�: ");
	scanf("%s",op);
	Sum(num1,num2);
	printf("����� %d\n", result);
}


