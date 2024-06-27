#include<stdio.h>
main()
{
	char data[15] = "C Language";
	char data2[15];
	char* p_data, * p_data2;
	p_data = data;		//先頭アドレスを入れる
	p_data2 = data2;	//先頭アドレスを入れる

	printf("data[]=%s\n", p_data);//%sの時はアドレスを指定する('\0'までが表示される)

	while (*p_data2++ = *p_data++);//文字列のコピー

	/*
	while (*p_data != '\0')
	{
		*p_data2 = *p_data;
		p_data++;
		p_data2++;
	}
	*p_data2 = '\0';
	*/
	p_data2 = data2;
	printf("data[]=%s\n", p_data2);
	while (*p_data2) {
		putchar(*p_data2++);
	}
	putchar('\n');
}