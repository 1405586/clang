#include<stdio.h>
main()
{
	int i;
	char data[6]="apple";
	//char data[]="apple"; ����ł�����
	printf("1�������\��\n");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c\n",data[i]);
	}
	printf("\n");
	printf("�������\��\n");
	//printf("%s\n",&data[0]); //%s�̎��̓A�h���X���w��
	printf("%s\n", data+2); //�z�񖼂��������Ɛ擪�A�h���X��\��
}