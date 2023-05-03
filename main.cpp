#include <stdio.h>

int main()
{
	char ch, new_ch;
	int n = 0;

	printf("[n文字後の文字を表示するプログラム]\n\n");
	printf("アルファベットを入力してください。(大文字でも小文字でも可。!で終了)\n");
	printf("アルファベット：");

	scanf_s("%c", &ch);

	printf("\n(処理中)...\n\n");
	printf("入力した文字は%cです。\n\n", ch);

	printf("%cの何文字後を表示するか数字で入力してください\n", ch);
	printf("数字：");
	scanf_s("%d", &n);

	printf("\n(処理中)...\n\n");

	if (ch >= 'a' && ch <= 'z') // 小文字の場合
	{
		new_ch = 'a' + (ch - 'a' + n) % 26;
	}
	else if (ch >= 'A' && ch <= 'Z') // 大文字の場合
	{
		new_ch = 'A' + (ch - 'A' + n) % 26;
	}

	printf("入力した文字%cの%d文字後のアルファベットは%cです。", ch, n, new_ch);

	printf("\n\n\n(初期化中)...\n\n");

	return 0;
}

