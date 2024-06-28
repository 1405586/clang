#include<stdio.h>
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day birth;
	char blood[5];
};

main()
{
	struct profile pro[5] = { {"田中",{2001,01,23},"AB"},
							{"山田",{2003,05,25},"A"},
							{ "山本",{2009,02,22}, "B" },
							{"山下",{2002,02,11},"B"},
							{"山口",{2019,11,24},"A"} };
	struct profile* p;
	int i;

	p = pro;

	for (i = 0; i < 5; i++,p++) {
		if (p->birth.tuki == 02) {
			printf("%s--%d年%d月%d日生まれ 血液型--%s型\n", p->name, p->birth.nen, p->birth.tuki, p->birth.hi, p->blood);
		}
	}


}