#include<stdio.h>
main()
{
	int i, s;
	int d[10+1] = { 10,5,30,77,16,3,47,29,37,33};
	
	printf("’Tõ’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d", &s);
	d[10] = s;
	for(i=0;d[i]!=s;i++){}
	if (i >= 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else {
		printf("”z—ñ‚Ì%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½", i);
	}

}