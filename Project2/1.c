//����1��+2��+3��+4��+...+n!
#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	int ret = 1;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		ret = 1;
		for (j = 1; j <= i; j++)
		{
			ret *= j;

		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}