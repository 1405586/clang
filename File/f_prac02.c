#include<stdio.h>
main()
{
	int score = 0,max_score;
	char ch;
	char name[20],max_name[20];
	FILE* fp;

	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", max_name, &max_score);
	fclose(fp);
	printf("最高得点 名前を:%s スコア:%d\n", max_name, max_score);

	printf("プレイヤーの名前は:");
	scanf("%s", name);
	while (1) {
		printf("現在のスコア:%d(Enterでスコア+1,eで終了)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	if (score > max_score) {
		fp=fopen("score.txt", "w");
		fprintf(fp,"%s\n%d", name, score);
		fclose(fp);
	}
	

}