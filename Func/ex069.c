#include<stdio.h>
main()
{
	int data, sum=0, cnt=0;
	int ret;

	printf("�����F");
	ret=scanf("%d",&data);

	while (ret != EOF)
	{
		cnt++;
		sum += data;

		printf("�����F");
		ret = scanf("%d",&data);
	}

	printf("���v�F%d ���ρF%.2f", sum, (float)sum / cnt);
}