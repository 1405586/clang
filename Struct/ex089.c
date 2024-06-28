#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile profile1;
	printf("名前を入力：");
	scanf("%s", &profile1.name);
	printf("生年月日を空白で区切って入力:");
	scanf("%d %d %d", &profile1.birth[0],&profile1.birth[1],&profile1.birth[2]);
	printf("血液型を入力:");
	scanf("%s", &profile1.blood);

	printf("%sーー%d年%d月%d日生 血液型ー&%s型", profile1.name, profile1.birth[0], profile1.birth[1], profile1.birth[2], profile1.blood);

}
