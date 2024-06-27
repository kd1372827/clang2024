#include<stdio.h>

#define nin 5

struct day {
	int nen;
	int tuki;
	int hi;
};

struct profile {
	char name[20];
	struct day date;
	char blood[5];
};

main()
{
	struct profile data[nin] = { { "A",2000, 1, 1,"A" },
								 { "B",1999,12,31,"O" },
								 { "C",1999, 2,25,"AB"},
								 { "D",2002, 2,20,"AB"},
								 { "E",1970, 2,17,"A" } };
	struct profile* p;
	p = data;

	for (int i = 0; i < 5; i++, p++) {
		if (p->date.tuki==2){
			printf("%dl–Ú\n", i + 1);
			printf("%6s[[%4d”N%2dŒ%2d“ú¶ ŒŒ‰tŒ^[%sŒ^\n", p->name,
				p->date.nen, p->date.tuki, p->date.hi, p->blood);
			printf("----------------------------\n");
		}
	}
}