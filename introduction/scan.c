#include <stdio.h>

int main(void)
{
    int a;

	printf("生まれた月を入力してください\n");

	scanf("%d", &a);

    if(a > 13)
	{
		printf("1~12の値で入力してください");
		return 0;
	}

	printf("あなたは、%d月生まれです。\n", a);

}
