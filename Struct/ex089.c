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
	printf("���O����́F");
	scanf("%s", &profile1.name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d %d %d", &profile1.birth[0],&profile1.birth[1],&profile1.birth[2]);
	printf("���t�^�����:");
	scanf("%s", &profile1.blood);

	printf("%s�[�[%d�N%d��%d���� ���t�^�[&%s�^", profile1.name, profile1.birth[0], profile1.birth[1], profile1.birth[2], profile1.blood);

}
