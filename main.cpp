#include <stdio.h>
#include <iostream>
#include <windows.h>

int main()
{
	char ch, new_ch;
	int n = 0;

	printf("[n������̕�����\������v���O����]\n\n");

	//�������[�v
	while(true){
		printf("�A���t�@�x�b�g����͂��Ă��������B(�啶���ł��������ł��B!�ŏI��)\n");
		printf("�A���t�@�x�b�g�F");
        std::cin >> ch;

		printf("\n(������)");

		//3��J��Ԃ�
		for (int i = 0; i < 3; i++) {
			Sleep(500); //0.5�b�҂�
			printf(".");
		}
		printf("\n\n");

		//!�����͂��ꂽ�ꍇ�A�������[�v�𔲂���
		if (ch == '!') {
			break;
		}
		printf("���͂���������%c�ł��B\n\n", ch);

		printf("%c�̉��������\�����邩�����œ��͂��Ă�������\n", ch);
		printf("�����F");
		std::cin >> n;

		printf("\n(������)");

		//3��J��Ԃ�
		for (int i = 0; i < 3; i++) {
			Sleep(500); //0.5�b�҂�
			printf(".");
		}
		printf("\n\n");

		if (ch >= 'a' && ch <= 'z')      // �������̏ꍇ
		{
			new_ch = 'a' + (ch - 'a' + n) % 26;
		}
		else if (ch >= 'A' && ch <= 'Z') // �啶���̏ꍇ
		{
			new_ch = 'A' + (ch - 'A' + n) % 26;
		}

		printf("���͂�������%c��%d������̃A���t�@�x�b�g��%c�ł��B", ch, n, new_ch);

		printf("\n\n\n(��������)");

		//3��J��Ԃ�
		for (int i = 0; i < 3; i++) {
			Sleep(500); //0.5�b�҂�
			printf(".");
		}
		printf("\n\n");

		getchar();
		getchar();
	}

	printf("�v���O�������I�����܂�\n");
	Sleep(500);
	printf("\n(�I��������)");

	//3��J��Ԃ�
	for (int i = 0; i < 3; i++) {
		Sleep(500); //0.5�b�҂�
		printf(".");
	}
	

	return 0;
}

