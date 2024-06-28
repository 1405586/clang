#include<stdio.h>
main()
{
	char data[] = "Language";
	char* p_data, ch;
	int i;
	p_data = data;

	printf("data[]=%s\n", p_data);
	printf("ŒŸõ•¶š‚Í?");
	scanf("%c", &ch);

	printf("ŒŸõŒ‹‰Ê‚Í");
	for (i = 0; *(p_data + i) != '\0'; i++) {
		if (ch == *(p_data + i)) {
			printf("%d  ", i + 1);
		}
	}
	printf("•¶š–Ú‚Å‚·");
}