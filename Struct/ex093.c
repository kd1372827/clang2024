#include<stdio.h>
struct syohin_data {
	char name[20];
	int	 tanka;
	int	 kosuu;
};

int main(void)
{
	struct syohin_data syohin[3] = { {"エンピツ",30,5},
									 {"ケシゴム",50,2},
									 {"フデバコ",500,3} };
	struct syohin_data* p;
	p = syohin;
	for (int i = 0; i < 3; i++, p++) {
		printf("商品名:%s\t", p->name);
		printf("単 価:%4d\t", p->tanka);
		printf("個 数:%4d\t", p->kosuu);
		printf("金 額:￥%4d\n", p->tanka * p->kosuu);
	}
}