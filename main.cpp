#include <stdio.h>

int main()
{
	char ch, new_ch;
	int n = 0;

	printf("[n������̕�����\������v���O����]\n\n");
	printf("�A���t�@�x�b�g����͂��Ă��������B(�啶���ł��������ł��B!�ŏI��)\n");
	printf("�A���t�@�x�b�g�F");

	scanf_s("%c", &ch);

	printf("\n(������)...\n\n");
	printf("���͂���������%c�ł��B\n\n", ch);

	printf("%c�̉��������\�����邩�����œ��͂��Ă�������\n", ch);
	printf("�����F");
	scanf_s("%d", &n);

	printf("\n(������)...\n\n");

	if (ch >= 'a' && ch <= 'z') // �������̏ꍇ
	{
		new_ch = 'a' + (ch - 'a' + n) % 26;
	}
	else if (ch >= 'A' && ch <= 'Z') // �啶���̏ꍇ
	{
		new_ch = 'A' + (ch - 'A' + n) % 26;
	}

	printf("���͂�������%c��%d������̃A���t�@�x�b�g��%c�ł��B", ch, n, new_ch);

	printf("\n\n\n(��������)...\n\n");

	return 0;
}

