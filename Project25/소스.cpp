
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	int a = 0;
	int b = 0;
	do {
		printf("[1] ��Ʈ AND(&)\n");
		printf("[2] ��Ʈ OR(|)\n");
		printf("[3] ��Ʈ XOR(^)\n");
		printf("[4] ��Ʈ COMPLEMENT(~)\n");
		printf("[0] ����(stop)\n");
		printf("�� ���� �� �ϳ��� �����ϼ���. >>");
		scanf("%d", &num);

		if (num == 1) {
			printf("��Ʈ ������ �� ���� �Է� >> ");
			scanf("%d %d", &a, &b);
			printf("a = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf("    %d\n", a);
			puts("");
			puts("");
			puts("");
			printf("b = ");
			for (int j = 31; j >= 0; j--)
			{
				printf("%c", ((b >> j) & 1) ? '1' : '0');
			}
			printf("    %d\n", b);
			puts("");
			puts("");
			puts("");
			printf(" a & b =  ");

			int z = a & b;
			for (int t = 31; t >= 0; t--)
			{
				printf("%c", ((z >> t) & 1) ? '1' : '0');
			}
			printf("    %d\n", z);
			puts("");
			puts("");
			puts("");
		}
		if (num == 2) {
			printf("��Ʈ ������ �� ���� �Է� >> ");
			scanf("%d %d", &a, &b);
			printf("a = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf("    %d\n", a);
			puts("");
			puts("");
			puts("");
			printf("b = ");
			for (int j = 31; j >= 0; j--)
			{
				printf("%c", ((b >> j) & 1) ? '1' : '0');
			}
			printf("    %d\n", b);
			puts("");
			puts("");
			puts("");
			printf(" a | b =  ");

			int z = a | b;
			for (int t = 31; t >= 0; t--)
			{
				printf("%c", ((z >> t) & 1) ? '1' : '0');
			}
			printf("    %d\n", z);
			puts("");
			puts("");
			puts("");
		}
		if (num == 3) {
			printf("��Ʈ ������ �� ���� �Է� >> ");
			scanf("%d %d", &a, &b);
			printf("a = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf("    %d\n", a);
			puts("");
			puts("");
			puts("");
			printf("b = ");
			for (int j = 31; j >= 0; j--)
			{
				printf("%c", ((b >> j) & 1) ? '1' : '0');
			}
			printf("    %d\n", b);
			puts("");
			puts("");
			puts("");
			printf(" a ^ b =  ");

			int z = a ^ b;
			for (int t = 31; t >= 0; t--)
			{
				printf("%c", ((z >> t) & 1) ? '1' : '0');
			}
			printf("    %d\n", z);
			puts("");
			puts("");
			puts("");
		}
		if (num == 4) {
			printf("��Ʈ ���� ������ �ϳ��� ���� �Է� >> ");
			scanf("%d", &a);
			printf("a = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf("    %d\n", a);
			puts("");
			puts("");
			puts("");

			printf("a =  ");

			int z = ~a;
			for (int t = 31; t >= 0; t--)
			{
				printf("%c", ((z >> t) & 1) ? '1' : '0');
			}
			printf("    %d\n", z);
			puts("");
			puts("");
			puts("");
		}
		if (num == 0) {
			printf("�����մϴ�.\n");
			break;
		}
	} while (1);
}
