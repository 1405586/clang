#include<stdio.h>
main()
{
	int data, sum=0, cnt=0;
	int ret;

	printf("整数：");
	ret=scanf("%d",&data);

	while (ret != EOF)
	{
		cnt++;
		sum += data;

		printf("整数：");
		ret = scanf("%d",&data);
	}

	printf("合計：%d 平均：%.2f", sum, (float)sum / cnt);
}