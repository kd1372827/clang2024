#include<stdio.h>
#define MapNum 3 //マップの数
#define W 10	//マップの横幅
#define H 5		//マップの高さ

typedef struct
{
	int m_map[H][W];
}Map;

//選択したマップデータを配列にセットする関数
void SetMap(char* filename, Map* m);

//マップデータ表示する関数
void DrawMap(Map m);

main()
{
	//マップのデータを管理する構造体
	Map MapData;
	char* MapFileName[MapNum] =
	{ "map0.txt","map1.txt","map2.txt" };
	int select;
	printf("マップNoを入力(0,1,2)>");
	scanf("%d", &select);
	if (select >= 0 && select < MapNum) {
		SetMap(MapFileName[select], &MapData);
		DrawMap(MapData);
	}
}

void SetMap(char* filename, Map* m)
{
	FILE* fp;
	char ch;
	int i, j;
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < H; i++) {
			for (j = 0; j < W; j++) {
				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';
			}
			fgetc(fp);
		}
	}
}
void DrawMap(Map m)
{
	int i, j;
	for (i = 0; i < H; i++) {
		for (j = 0; j < W; j++) {
			if (m.m_map[i][j] == 1) {
				printf("■");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}